#ifndef DRAGWIDGET_H
#define DRAGWIDGET_H

#include <QWidget>
#include <QDragEnterEvent>
#include <QDropEvent>
#include <QDragMoveEvent>

class DragWidget : public QWidget
{
    Q_OBJECT
public:
    DragWidget(QWidget *parent=0);
    
    void dragEnterEvent(QDragEnterEvent *);
    void dragMoveEvent(QDragMoveEvent *);
    void dropEvent(QDropEvent *);
};

#endif 
