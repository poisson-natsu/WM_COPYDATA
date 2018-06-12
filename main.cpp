#include "mainwindow.h"
#include <QApplication>
#include "eventhandler.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
//    a.setApplicationName(QStringLiteral("个人工作集成平台助手"));
//    EventHandler eventHandler;
//    a.installNativeEventFilter(&eventHandler);
    MainWindow w;
    w.setWindowTitle("个人工作集成平台助手");
    w.show();

    return a.exec();
}
