#ifndef JIWAKAHOMEWIDGET_H
#define JIWAKAHOMEWIDGET_H
#include <QtWidgets>
#include "niourkdialog.h"

class JiwakaHomeWidget : public QWidget
{
    Q_OBJECT
public:
    explicit JiwakaHomeWidget(QWidget *parent = nullptr);

public Q_SLOTS:
    void onKiwiClicked();



private:
    NiourkDialog *niourkdial;
};

#endif // JIWAKAHOMEWIDGET_H
