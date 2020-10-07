#include "client.h"

client::client(QString  initialHeight, QString  initialWidth, QString  wrapperWindowHeight, QString windowX, QString windowY, QObject *parent) : QObject(parent)
{
    socket = new QLocalSocket(this);
    connect(socket, &QLocalSocket::readyRead, this, &client::readContentFromServer);
    socket->connectToServer("ServerName");

    setInitialHeight(initialHeight.toInt());
    setInitialWidth(initialWidth.toInt());
    setWrapperWindowHeight(wrapperWindowHeight.toInt());
    setInitialX(windowX.toInt());
    setInitialY(windowY.toInt());

    setWindowHeight(initialHeight.toInt());
    setWindowWidth(initialWidth.toInt());
    setWindowX(windowX.toInt());
    setWindowY(windowY.toInt());
}

//Server incoming contents handlers
inline void client::readContentFromServer()
{
    setReceivedFromServer(socket->readAll());
}

inline void client::setReceivedFromServer(QByteArray fromServer)
{
    switch (fromServer.at(0)) {
        case 'G': {
            setDimensionsReceivedFromServer(fromServer.split('G'));
            setWindowX(dimensionsReceivedFromServer.at(1).toInt());
            setWindowY(dimensionsReceivedFromServer.at(2).toInt());
            setWindowWidth(dimensionsReceivedFromServer.at(3).toInt());
            setWindowHeight(dimensionsReceivedFromServer.at(4).toInt());
            return;
        }
        case 'V': {
            fromServer.remove(0,4);
            if(fromServer == "true")
                setWindowVisibility(true);

            if(fromServer == "false")
                setWindowVisibility(false);
            return;
        }
        default: {
            //Textual content handler (Patient...)
            if (fromServer != receivedFromSever) {
                receivedFromSever = fromServer;
            }
        }
    }

    emit receivedFromServerChanged();
}

//Getters and setters implementation
QList<QByteArray> client::getDimensionsReceivedFromServer() const
{
    return dimensionsReceivedFromServer;
}

void client::setDimensionsReceivedFromServer(const QList<QByteArray> &value)
{
    dimensionsReceivedFromServer = value;
}
int client::getInitialWidth() const
{
    return initialWidth;
}

void client::setInitialWidth(int value)
{
    initialWidth = value;
}

int client::getInitialHeight() const
{
    return initialHeight;
}

void client::setInitialHeight(int value)
{
    initialHeight = value;
}

int client::getWrapperWindowHeight() const
{
    return wrapperWindowHeight;
}

void client::setWrapperWindowHeight(int value)
{
    wrapperWindowHeight = value;
}

bool client::getWindowVisibility() const
{
    return windowVisibility;
}

void client::setWindowVisibility(bool value)
{
    windowVisibility = value;
    emit windowVisibilityChanged();
}

short client::getWindowX() const
{
    return windowX;
}

void client::setWindowX(const short &value)
{
    windowX = value;
    emit windowXChanged();
}

short client::getWindowY() const
{
    return windowY;
}

void client::setWindowY(const short &value)
{
    windowY = value;
    emit windowYChanged();
}

short client::getWindowWidth() const
{
    return windowWidth;
}

void client::setWindowWidth(const short &value)
{
    windowWidth = value;
    emit windowWidthChanged();
}

short client::getWindowHeight() const
{
    return windowHeight;
}

void client::setWindowHeight(const short &value)
{
    windowHeight = value;
    emit windowHeightChanged();
}

QByteArray client::getReceivedFromServer()
{
    return receivedFromSever;
}

int client::getInitialY() const
{
    return initialY;
}

void client::setInitialY(int value)
{
    initialY = value;
}

int client::getInitialX() const
{
    return initialX;
}

void client::setInitialX(int value)
{
    initialX = value;
}


