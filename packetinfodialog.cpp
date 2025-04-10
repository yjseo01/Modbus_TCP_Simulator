#include "packetinfodialog.h"
#include "ui_packetinfodialog.h"

PacketInfoDialog::PacketInfoDialog(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::PacketInfoDialog)
{
    ui->setupUi(this);
}

PacketInfoDialog::~PacketInfoDialog()
{
    delete ui;
}
