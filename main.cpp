#include "principal.h"
#include "calculosalario.h"
#include <QApplication>

#include <QObject>
#include <QtDebug>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Principal w;
    w.show();

    //Calcular salario

//    CalculoSalario Obj1("Mateo", 10, 'V');
//    Obj1.calcular();
//    CalculoSalario Obj2("edison", 25, 'M');
//    Obj2.calcular();
//    CalculoSalario Obj3("Diego", 6, 'N');
//    Obj3.calcular();










    return a.exec();
}
