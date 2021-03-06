#ifndef JSCOMUNICADOR_H
#define JSCOMUNICADOR_H

#include <QObject>

class JSComunicador : public QObject
{
    Q_OBJECT
public:
    explicit JSComunicador(QObject *parent = 0);
    void setHomeJS(float lat, float lng);

signals:
    void sendPoints(int mode, int type, int count);
    void sendPoint(float lat, float lng);
    void exit();
    void Despegar();
    void Aterrizar();
    void GoHome();
    void Motores();

    void SendAltura(float altura);
    void SendYawVelocidad(float yaw, float velocidad);
    void SendAlturaYawVelocidad(float altura, float yaw, float velocidad);

public slots:
    void requestMissionReceived();

private:

};

#endif // JSCOMUNICADOR_H
