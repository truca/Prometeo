#ifndef MAPA_H
#define MAPA_H

#include <QWebView>
#include <QWebFrame>
#include "comunicadorjs.h"
#include "chromificador.h"

class Mapa : public QWebView
{
    Q_OBJECT
public:
    explicit Mapa(QWidget *parent = 0);
    JSComunicador *comunicadorjs;
    void setBatteryValue();
    
signals:
    /*signal emited when a waypoint is seted*/
    void setGoto(double lat, double lng); // ir a punto gps
    void setHome(double lat, double lng); // home
    void setView(double lat, double lng); // yaw

public slots:
    void addJSObject();
    void requestMissionReceived();

    void addPosition(double lat, double lng); // set icon de quad
    void setCenter(float lat, float lng, int zoom);
    
private slots:
    void loadFinished(bool);
};

#endif // MAPA_H
