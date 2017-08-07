#include "niourk_dialog.h"

niourk_dialog::niourk_dialog(QWidget *parent) : QWidget(parent)
{
    public:
        Dialog(QWidget *parent=0)
        :QDialog(parent)
        {
            // Elle est simplement composé d'un bouton "Fermer"
            QPushButton *closeBtn = new QPushButton("Fermer", this);

            // lequel ferme la fenetre lorsqu'on clic dessus
            connect(closeBtn, SIGNAL(clicked()), this, SLOT(accept()));
        };
}
