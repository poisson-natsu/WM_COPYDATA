#ifndef EVENTHANDLER_H
#define EVENTHANDLER_H

#include <QObject>
#include <QAbstractNativeEventFilter>

class EventHandler : public QAbstractNativeEventFilter
{
public:
    virtual bool nativeEventFilter(const QByteArray & eventType, void * message, long * result);
};

#endif // EVENTHANDLER_H
