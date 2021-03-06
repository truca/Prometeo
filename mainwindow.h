f#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QTimer>
#include <QFile>
#include "PortListener.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT
    
public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();


signals:
    void quit();

private slots:
    void timeout();
    void on_Startlog_clicked();
    void insertTextConsola(QString string);
    void newParamValue(enum Tipo_Param tipo, float value);

    void exit();

    void on_pushButton_armarDesarmarMotores_clicked();

    void on_dialYaw_sliderPressed();

    void addWaypoint(float lat, float lng); // ir a punto gps
    void setHome(double lat, double lng); // home
    void setView(double lat, double lng); // yaw

    void on_dialYaw_valueChanged(int value);
    void dialYaw_valueChanged_timeout();

    void newAltura(double altura);
    void newYaw(double yaw);

    void setGoto(double lat, double lng);
    void on_tabWidget_currentChanged(int index);
    void on_verticalSlider_altura_sliderReleased();
    void on_verticalSlider_altura_sliderPressed();
    void timerSetAltura_timeout();
    void on_pushButton_read_params_clicked();
    void on_doubleSpinBox_altura_P_valueChanged(double arg1);
    void on_doubleSpinBox_altura_D_valueChanged(double arg1);
    void on_doubleSpinBox_yaw_P_valueChanged(double arg1);
    void on_doubleSpinBox_yaw_D_valueChanged(double arg1);
    void on_doubleSpinBox_XY_P_valueChanged(double arg1);
    void on_doubleSpinBox_XY_D_valueChanged(double arg1);
    void on_doubleSpinBox_altura_valueChanged(double arg1);
    void on_pushButton_casa_clicked();

protected:
    void keyPressEvent(QKeyEvent* event);

private:
    Ui::MainWindow *ui;
    QTimer *t;
    bool log;
    PortListener *rcv;
    QFile fileB;
    bool firstUAVPos;

    float dialyaw;
    QTimer timerSetYawToHome_valueChanged;
    QTimer timerSetAltura;
};

#endif // MAINWINDOW_H
