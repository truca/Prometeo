#include "mapa.h"

Mapa::Mapa(QWidget *parent) :
    QWebView(parent)
{


    // MAPA
    comunicadorjs = new JSComunicador(this);
    setPage(new Chromificador());

    settings()->setAttribute( QWebSettings::JavascriptEnabled, true );
    settings()->setAttribute( QWebSettings::DeveloperExtrasEnabled, true );

    connect(page()->mainFrame(), SIGNAL(javaScriptWindowObjectCleared()), this, SLOT(addJSObject()));
    connect(page(), SIGNAL(loadFinished(bool)), this, SLOT(loadFinished(bool)));

//    load(QUrl("http://www.puertosur.cl/images/Mapa2.html"));
//    load(QUrl("http://www.xaerials.lin.cl/Mapa.html"));
    load(QUrl("http://www.tractorverde.cl/XAerials/Mapa/Mapa.html"));
//    load(QUrl("http://puertosur.cl/images/gui/Manual/ControlManual.html"));
}

void Mapa::requestMissionReceived(){
    page()->mainFrame()->evaluateJavaScript("sendPoint();");
}

void Mapa::loadFinished(bool ok) {
    //page()->mainFrame()->evaluateJavaScript("setCenter(-33.02321, -71.55033, 10);");
//    page()->mainFrame()->evaluateJavaScript("addPosition(-33.02321, -71.55033)");
}

void Mapa::addPosition(double lat, double lng){
    QString Lat, Lng;
    Lat.setNum(lat, 'g', 9);
    Lng.setNum(lng, 'g', 9);
    page()->mainFrame()->evaluateJavaScript("addPosition("+Lat+","+Lng+");");
}

void Mapa::setBatteryValue(value){
    page()->mainFrame()->evaluateJavaScript("setBatteryValue("+value+")");
}

void Mapa::addJSObject() {
    page()->mainFrame()->addToJavaScriptWindowObject("comunicadorjs", comunicadorjs);
}

void Mapa::setCenter(float lat, float lng, int zoom){
    QString Lat, Lng, Zoom;
    Lat.setNum(lat, 'g', 9);
    Lng.setNum(lng, 'g', 9);
    Zoom.setNum(zoom);
    page()->mainFrame()->evaluateJavaScript("setCenter2("+Lat+","+Lng+","+Zoom+");");
}
