#include <QGuiApplication>
#include <QQmlApplicationEngine>
#include "AnimalModel.h"
#include <QQmlContext>

int main(int argc, char *argv[])
{
    QGuiApplication app(argc, argv);

    QQmlApplicationEngine engine;
    AnimalModel model;
    model.addAnimal(AnimalElement("Wolf", "Medium"));
    model.addAnimal(AnimalElement("Polar bear", "Large"));
    model.addAnimal(AnimalElement("Quoll", "Small"));

    QQmlContext *ctxt = engine.rootContext();
    ctxt->setContextProperty("myModel", &model);
    engine.load(QUrl(QStringLiteral("qrc:/main.qml")));
    if (engine.rootObjects().isEmpty())
        return -1;

    return app.exec();
}
