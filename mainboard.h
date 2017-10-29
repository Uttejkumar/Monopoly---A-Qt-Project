#ifndef MAINBOARD_H
#define MAINBOARD_H

#include <QDialog>

namespace Ui {
class MainBoard;
}

class MainBoard : public QDialog
{
    Q_OBJECT

public:
    explicit MainBoard(QWidget *parent = 0);
    ~MainBoard();

private slots:
    void on_board_roll_clicked();

    void on_board_mycards_clicked();

    void on_board_trade_clicked();

    void on_board_end_clicked();

    void on_pushButton_clicked();

private:
    Ui::MainBoard *ui;
};

#endif // MAINBOARD_H
