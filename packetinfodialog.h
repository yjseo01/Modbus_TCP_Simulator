#ifndef PACKETINFODIALOG_H
#define PACKETINFODIALOG_H

#include <QDialog>

namespace Ui {
class PacketInfoDialog;
}

class PacketInfoDialog : public QDialog
{
    Q_OBJECT

public:
    explicit PacketInfoDialog(QWidget *parent = nullptr);
    ~PacketInfoDialog();

private:
    Ui::PacketInfoDialog *ui;
};

#endif // PACKETINFODIALOG_H
