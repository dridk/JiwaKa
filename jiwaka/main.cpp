#include "mainwindow.h"
#include "niourkdialog.h"
#include <QApplication>
#include <QPushButton>
#include <QWidget>
#include <QLabel>
#include <QPixmap>
#include <QGridLayout>
#include <QBoxLayout>
#include <QGraphicsView>
#include <QDialog>
#include <QObject>


class Widget_Jiwaka_home : public QWidget
{
public:
    Widget_Jiwaka_home(QWidget *parent = 0);
public slots:
    void on_niourkbutton_clicked();
private:
    NiourkDialog *niourkdial;
};

void Widget_Jiwaka_home::on_niourkbutton_clicked()
{
    niourkdial = new NiourkDialog(this); //this pour relier a mainwindow et same destroy
    niourkdial->exec();
}



Widget_Jiwaka_home::Widget_Jiwaka_home(QWidget *parent)
     : QWidget(parent)
{
    // Jiwaka image
    QLabel *label_jiwaka = new QLabel();
    QPixmap pixmap_jiwaka("img/jiwaka_black.png");
    label_jiwaka->setPixmap(pixmap_jiwaka);

    // Kiwi Button
    QPushButton *button_kiwi = new QPushButton();
    button_kiwi->setIcon(QIcon("img/kiwi_white.png"));
    button_kiwi->setIconSize(QSize(150,100));
    button_kiwi->setFlat(true);
    button_kiwi->setToolTip("Module de correction\n   des fichiers BAMs\n            (v1.0)");

    // Niourk Button
    QPushButton *button_niourk = new QPushButton();
    button_niourk->setIcon(QIcon("img/Niourk_white.png"));
    button_niourk->setIconSize(QSize(150,100));
    button_niourk->setFlat(true);
    button_niourk->setToolTip("Pipeline d'analyse NGS\n             (v1.7)");
    connect(button_niourk, SIGNAL(clicked()), this, SLOT(on_niourkbutton_clicked()));

    // Kermit Button
    QPushButton *button_kermit = new QPushButton();
    button_kermit->setIcon(QIcon("img/Kermit_white.png"));
    button_kermit->setIconSize(QSize(150,100));
    button_kermit->setFlat(true);
    button_kermit->setToolTip("Framework d'analyse\n des variants ADNmt\n            (v1.0)");

    // eKLIPse Button
    QPushButton *button_eklipse = new QPushButton();
    button_eklipse->setIcon(QIcon("/home/dooguy/Documents/Documents_Taf/Presentation/logos/eklipse_white.png"));
    button_eklipse->setIconSize(QSize(150,100));
    button_eklipse->setFlat(true);
    button_eklipse->setToolTip("   Outil de prédiction\nde délétion(s) ADNmt\n            (v1.6)");

    // CHU-UNIV logo
    QLabel *label_chu = new QLabel();
    QLabel *label_univ = new QLabel();
    QPixmap pixmap_chu("img/logo-chu-angers-g-2.png");
    QPixmap pixmap_chu2 = pixmap_chu.scaled(50,50, Qt::IgnoreAspectRatio, Qt::SmoothTransformation);
    QPixmap pixmap_univ("img/ua_h_noir_ecran.png");
    QPixmap pixmap_univ2 = pixmap_univ.scaled(100,31, Qt::IgnoreAspectRatio, Qt::SmoothTransformation);
    label_chu->setPixmap(pixmap_chu2);
    label_univ->setPixmap(pixmap_univ2);
    QHBoxLayout *footer = new QHBoxLayout;
    footer->setContentsMargins(0,0,0,0);
    footer->setSpacing(20);
    footer->addStretch(1);
    footer->addWidget(label_chu);
    footer->addWidget(label_univ);
    footer->addStretch(12);

    // Main Grid Layout
    QGridLayout *grid = new QGridLayout;
    grid->setSpacing(10);
    grid->addWidget(label_jiwaka,1,0,1,2,Qt::AlignCenter);
    grid->addWidget(new QWidget, 2, 1); // empty widget
    grid->addWidget(button_kiwi,3,0,Qt::AlignCenter);
    grid->addWidget(button_niourk,3,1,Qt::AlignCenter);
    grid->addWidget(button_kermit,4,0,Qt::AlignCenter);
    grid->addWidget(button_eklipse,4,1,Qt::AlignCenter);
    grid->addWidget(new QWidget,5,1); // empty widget
    grid->addLayout(footer,6,0,1,2);
    setLayout(grid);
}



int main(int argc, char *argv[])
{
    QApplication app(argc, argv);
    // QPushButton CSS style
    app.setStyleSheet("QPushButton{background-color:black;padding:6px;border-radius:20px;} QPushButton::hover{background-color:#0047AB;} QPushButton::pressed{background-color:#424242;}");
    // Main Widget
    Widget_Jiwaka_home widget_home;
    widget_home.resize(400, 500);
    widget_home.setWindowTitle("J i w a K a");
    widget_home.show();
    return app.exec();
}


