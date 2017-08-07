#ifndef NIOURKDIALOG_H
#define NIOURKDIALOG_H

#include <QDialog>

namespace Ui {
class NiourkDialog;
}

class NiourkDialog : public QDialog
{
    Q_OBJECT

public:
    explicit NiourkDialog(QWidget *parent = 0);
    ~NiourkDialog();

private:
    Ui::NiourkDialog *ui;
};

#endif // NIOURKDIALOG_H
