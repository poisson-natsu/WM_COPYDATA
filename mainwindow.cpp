#include "mainwindow.h"
#include <QHBoxLayout>
#include <QLabel>
#include <windows.h>
#include <QDialog>
#include <QDebug>


#ifdef Q_CC_MSVC
#pragma comment(lib, "user32.lib")
#endif

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
{
    m_label = new QLabel("Ready...",this);
    m_label->move(20,20);

}

MainWindow::~MainWindow()
{

}

bool MainWindow::nativeEvent(const QByteArray &eventType, void *message, long *result)
{
    MSG *msg = (MSG*)message;
    if (msg->message == WM_COPYDATA){
        qDebug() << "*******************";
        COPYDATASTRUCT * p = reinterpret_cast<COPYDATASTRUCT*>(msg->lParam);
        m_label->setText(static_cast<char*>(p->lpData));
    }
    return QMainWindow::nativeEvent(eventType, message, result);
}

