#include "principal.h"
#include "calculosalario.h"
#include "ui_principal.h"

#include <QDebug>
#include <QMessageBox>

Principal::Principal(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Principal)
{
    ui->setupUi(this);
    //conectar objetos
    connect(ui->actionCalcular, SIGNAL(triggered()),
            this, SLOT(on_cmdCalcular_clicked()));
}

Principal::~Principal()
{
    delete ui;
}


void Principal::on_actionSalir_triggered()
{
    this->close();
}

void Principal::on_cmdCalcular_clicked()
{
    //obtener los datos
    QString nombre = ui->inNombre->text();
    if(nombre.isEmpty()){
        int ret=QMessageBox::warning(this, "Salarios", "No has proporcionado el nombre del obrero");
        return;

    }
    int horas =ui->inHoras->value();
    char jornada ='\0';
    if(ui->inMatutino->isChecked()){
        jornada = 'M';
    }else if (ui->inNocturna->isChecked()){
        jornada ='N';
    }else if (ui->inVespertina){
        jornada = 'V';

    }
    CalculoSalario *s1 = new CalculoSalario(nombre, horas, jornada);
    s1->calcular();

    //muestra los resultados
//    qDebug()<<s1->salarioBruto();
//    qDebug()<<s1->descuento();
//    qDebug()<<s1->salarioNeto();
    ui->outResultado->appendPlainText(s1->resultado());



}

void Principal::calcular()
{

}

//void Principal ::on_actionCalcular_tiggered()
//{

//}
