#ifndef PRINCIPAL_H
#define PRINCIPAL_H

#include "calculosalario.h"

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class Principal; }
QT_END_NAMESPACE

class Principal : public QMainWindow
{
    Q_OBJECT

public:
    Principal(QWidget *parent = nullptr);
    ~Principal();


private slots:
    void on_actionSalir_triggered();
    void on_cmdCalcular_clicked();

private:
    Ui::Principal *ui;
    void calcular();
};
#endif // PRINCIPAL_H
