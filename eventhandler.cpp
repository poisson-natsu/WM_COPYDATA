#include "eventhandler.h"
#include <Windows.h>
#include <QDebug>

bool EventHandler::nativeEventFilter(const QByteArray &eventType, void *message, long *result)
{
    if (QString(eventType)=="windows_generic_MSG") {
 #ifdef Q_OS_WIN32
        MSG* msg = (MSG*)message;

        if(msg->message == WM_COPYDATA)
        {
            COPYDATASTRUCT * p = reinterpret_cast<COPYDATASTRUCT*>(msg->lParam);
            qDebug() << static_cast<char*>(p->lpData);
            qDebug() << "connection between processes success...";
        }
#endif
    } else {
        qDebug() << "get msg type:"+QString(eventType);
    }
    return false;
}
