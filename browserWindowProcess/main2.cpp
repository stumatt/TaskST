// Main implementation for socket-based project

//#include <QGuiApplication>
//#include <QQmlApplicationEngine>
//#include <QQmlContext>
//#include <QQuickWindow>
//#include "client.h"

//int main(int argc, char *argv[])
//{
//    QCoreApplication::setAttribute(Qt::AA_EnableHighDpiScaling);

//    QGuiApplication app(argc, argv);

//    //Pass the window initial dimensions
//    client mClient(argv[2],argv[3],argv[1], argv[4], argv[5], &app);

//    QSharedPointer<SimpleSwitchReplica> ptr; // shared pointer to hold source replica

//    QRemoteObjectNode repNode; // create remote object node
//    repNode.connectToNode(QUrl(QStringLiteral("local:switch"))); // connect with remote host node

//    ptr.reset(repNode.acquire<SimpleSwitchReplica>()); // acquire replica of source from host node

//    client rswitch(ptr); // create client switch object and pass reference of replica to it


//    QQmlApplicationEngine engine;

//    engine.rootContext()->setContextProperty("client",&rswitch);

//    engine.rootContext()->setContextProperty("pid",QCoreApplication::applicationPid());
//    engine.rootContext()->setContextProperty("mClient",&mClient);

//    const QUrl url(QStringLiteral("qrc:/main.qml"));
//    QObject::connect(&engine, &QQmlApplicationEngine::objectCreated,
//                     &app, [url](QObject *obj, const QUrl &objUrl) {
//        if (!obj && url == objUrl)
//            QCoreApplication::exit(-1);
//    }, Qt::QueuedConnection);
//    engine.load(url);

//    auto topLevelObject = engine.rootObjects().value(0);
//    auto window = qobject_cast<QQuickWindow *>(topLevelObject);
//    window->setFlags(Qt::WindowStaysOnTopHint | Qt::FramelessWindowHint);

//    //implement connection signal/setGeometry
//    QObject::connect(&mClient, &client::windowXChanged, [&](){
//        window->setGeometry(mClient.getWindowX(), mClient.getWindowY(), mClient.getWindowWidth(), mClient.getWindowHeight());
//        });

//    QObject::connect(&mClient, &client::windowYChanged, [&](){
//        window->setGeometry(mClient.getWindowX(), mClient.getWindowY(), mClient.getWindowWidth(), mClient.getWindowHeight());
//        });

//    QObject::connect(&mClient, &client::windowWidthChanged, [&](){
//        window->setGeometry(mClient.getWindowX(), mClient.getWindowY(), mClient.getWindowWidth(), mClient.getWindowHeight());
//        });

//    QObject::connect(&mClient, &client::windowHeightChanged, [&](){
//        window->setGeometry(mClient.getWindowX(), mClient.getWindowY(), mClient.getWindowWidth(), mClient.getWindowHeight());
//        });

//    return app.exec();
//}
