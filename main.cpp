//#include <QGuiApplication>
//#include <QQmlApplicationEngine>
//#include <QtWebEngine>
#include <QQmlContext>
//#include <qtwebengineglobal.h>

#include <QGuiApplication>
#include <QQmlApplicationEngine>

#include <qtwebengineglobal.h>

#include "mousememory.h"


int main(int argc, char *argv[])
{
    QCoreApplication::setAttribute(Qt::AA_EnableHighDpiScaling);
    QGuiApplication app(argc, argv);
    QtWebEngine::initialize();

    QScopedPointer<mousememory> mouse (new mousememory);


    QQmlApplicationEngine engine;
    engine.load(QUrl(QLatin1String("qrc:/main.qml")));
    engine.rootContext()->setContextProperty("mouse",mouse.data());

    return app.exec();
}
