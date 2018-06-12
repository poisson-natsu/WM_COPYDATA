#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QDialog>
class QLabel;

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = 0);
    ~MainWindow();

protected:
//    bool nativeEvent(MSG *message, long *result);
    bool nativeEvent(const QByteArray &eventType, void *message, long *result);
private:
    QLabel * m_label;

};

#endif // MAINWINDOW_H
