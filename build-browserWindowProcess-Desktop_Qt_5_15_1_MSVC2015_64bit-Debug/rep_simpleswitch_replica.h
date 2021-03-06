#ifndef REP_SIMPLESWITCH_REPLICA_H
#define REP_SIMPLESWITCH_REPLICA_H

// This is an autogenerated file.
// Do not edit this file, any changes made will be lost the next time it is generated.

#include <QtCore/qobject.h>
#include <QtCore/qdatastream.h>
#include <QtCore/qvariant.h>
#include <QtCore/qmetatype.h>

#include <QtRemoteObjects/qremoteobjectnode.h>
#include <QtRemoteObjects/qremoteobjectpendingcall.h>
#include <QtRemoteObjects/qremoteobjectreplica.h>

#include <QRect>

class SimpleSwitchReplica : public QRemoteObjectReplica
{
    Q_OBJECT
    Q_CLASSINFO(QCLASSINFO_REMOTEOBJECT_TYPE, "SimpleSwitch")
    Q_CLASSINFO(QCLASSINFO_REMOTEOBJECT_SIGNATURE, "3303202e1aac0e05fc37c568307af8a6709ba73a")
    Q_PROPERTY(QRect geometry READ geometry NOTIFY geometryChanged)

public:
    SimpleSwitchReplica() : QRemoteObjectReplica() { initialize(); }
    static void registerMetatypes()
    {
        static bool initialized = false;
        if (initialized)
            return;
        initialized = true;
    }

private:
    SimpleSwitchReplica(QRemoteObjectNode *node, const QString &name = QString())
        : QRemoteObjectReplica(ConstructWithNode)
    {
        initializeNode(node, name);
    }

    void initialize() override
    {
        SimpleSwitchReplica::registerMetatypes();
        QVariantList properties;
        properties.reserve(1);
        properties << QVariant::fromValue(QRect());
        setProperties(properties);
    }

public:
    ~SimpleSwitchReplica() override = default;

    QRect geometry() const
    {
        const QVariant variant = propAsVariant(0);
        if (!variant.canConvert<QRect>()) {
            qWarning() << "QtRO cannot convert the property geometry to type QRect";
        }
        return variant.value<QRect >();
    }


Q_SIGNALS:
    void geometryChanged(QRect geometry);

public Q_SLOTS:
    void pushGeometry(QRect geometry)
    {
        static int __repc_index = SimpleSwitchReplica::staticMetaObject.indexOfSlot("pushGeometry(QRect)");
        QVariantList __repc_args;
        __repc_args << QVariant::fromValue(geometry);
        send(QMetaObject::InvokeMetaMethod, __repc_index, __repc_args);
    }

private:
    friend class QT_PREPEND_NAMESPACE(QRemoteObjectNode);
};


QT_BEGIN_NAMESPACE
QT_END_NAMESPACE


#endif // REP_SIMPLESWITCH_REPLICA_H
