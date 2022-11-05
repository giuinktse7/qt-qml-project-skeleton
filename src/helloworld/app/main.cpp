#include <QDebug>
#include <QGuiApplication>
#include <QIODevice>
#include <QQmlApplicationEngine>
#include <iostream>

#include "core/core.h"
#include "debug_util.h"

#include <QtQml/qqmlextensionplugin.h>
Q_IMPORT_QML_PLUGIN(AppComponentsPlugin)

int main(int argc, char *argv[])
{
    // qInstallMessageHandler(pipeQtMessagesToStd);

    Core::sayHi();
    showQmlResources();
    // exit(0);

    QGuiApplication app(argc, argv);

    QQmlApplicationEngine engine;
    engine.addImportPath(QStringLiteral(":/"));
    const QUrl url(u"qrc:/myapp/qml/main.qml"_qs);
    engine.load(url);

    return app.exec();
}