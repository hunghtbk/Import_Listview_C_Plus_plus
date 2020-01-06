#include <QGuiApplication>
#include <QQmlApplicationEngine>
#include "AnimalModel.h"
#include <QQmlContext>
#include "AnimalFeeder.h"

int main(int argc, char *argv[])
{
    QGuiApplication app(argc, argv);

    QQmlApplicationEngine engine;

    AnimalFeeder *feeder = new AnimalFeeder();

    QQmlContext *ctxt = engine.rootContext();
    ctxt->setContextProperty("myModel", feeder->m_model);
    engine.load(QUrl(QStringLiteral("qrc:/main.qml")));
    if (engine.rootObjects().isEmpty())
        return -1;

    return app.exec();
}
