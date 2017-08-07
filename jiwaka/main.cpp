#include <QApplication>
#include "JiwakaHomeWidget.h"



int main(int argc, char *argv[])
{
    QApplication app(argc, argv);
    // QPushButton CSS style
//    app.setStyleSheet("QPushButton{background-color:black;padding:6px;border-radius:20px;} QPushButton::hover{background-color:#0047AB;} QPushButton::pressed{background-color:#424242;}");
    // Main Widget

    JiwakaHomeWidget homeWidget;
    homeWidget.resize(400, 500);
    homeWidget.setWindowTitle("J i w a K a");
    homeWidget.show();

    return app.exec();
}


