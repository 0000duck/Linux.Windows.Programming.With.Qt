#ifndef SERVER_H
#define SERVER_H

#include <QtNetwork>
#include "tcpclientsocket.h"
class Server : public QTcpServer		
{
    Q_OBJECT
public:
    Server(QObject *parent = 0,int port=0);
    
    QList<TcpClientSocket*> tcpClientSocketList;
signals:
    void updateServer(QString,int);
public slots:
    void updateClients(QString,int);
    void slotDisconnected(QTcpSocket *);
    void slotNewConnection();
};


#endif
