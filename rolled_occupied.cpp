#include "rolled_occupied.h"
#include "ui_rolled_occupied.h"
#include "gamedata.h"
#include "data.h"
#include "cards_details.h"
#include "mainboard.h"
#include "QPixmap"

rolled_occupied::rolled_occupied(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::rolled_occupied)
{
    ui->setupUi(this);
    setWindowFlags(Qt::FramelessWindowHint);

    int widthpic,heightpic;

    ui->occ_dice1->setNum(die1);
    ui->occ_dice2->setNum(die2);
    int possesion_in = cardsinfo[gamers[opdata.currently_playing()].get_position()].get_possession();
    ui->occ_owner->setText(gamers[possesion_in].get_playername());
    ui->paid_rent->setNum(cardsinfo[gamers[opdata.currently_playing()].get_position()].get_rent());

    int rent = cardsinfo[gamers[opdata.currently_playing()].get_position()].get_rent();
    gamers[possesion_in].add_money(rent);
    gamers[opdata.currently_playing()].subtract_money(rent);

    ui->cash_left->setNum(gamers[opdata.currently_playing()].get_money());

    switch(gamers[opdata.currently_playing()].get_position())
    {
    case 1:
    {
        QPixmap pix(":/CardsPictures/CardsPictures/CARD1.jpg");
        widthpic = ui->roll_pic->width();
        heightpic = ui->roll_pic->height();
        ui->roll_pic->setPixmap(pix.scaled(widthpic,heightpic,Qt::KeepAspectRatio));
        break;
    }
    case 3:
    {
        QPixmap pix(":/CardsPictures/CardsPictures/CARD3.jpg");
        widthpic = ui->roll_pic->width();
        heightpic = ui->roll_pic->height();
        ui->roll_pic->setPixmap(pix.scaled(widthpic,heightpic,Qt::KeepAspectRatio));
        break;
    }
    case 6:
    {
        QPixmap pix(":/CardsPictures/CardsPictures/CARD6.jpg");
        widthpic = ui->roll_pic->width();
        heightpic = ui->roll_pic->height();
        ui->roll_pic->setPixmap(pix.scaled(widthpic,heightpic,Qt::KeepAspectRatio));
        break;
    }
    case 8:
    {
        QPixmap pix(":/CardsPictures/CardsPictures/CARD8.jpg");
        widthpic = ui->roll_pic->width();
        heightpic = ui->roll_pic->height();
        ui->roll_pic->setPixmap(pix.scaled(widthpic,heightpic,Qt::KeepAspectRatio));
        break;
    }
    case 9:
    {
        QPixmap pix(":/CardsPictures/CardsPictures/CARD9.jpg");
        widthpic = ui->roll_pic->width();
        heightpic = ui->roll_pic->height();
        ui->roll_pic->setPixmap(pix.scaled(widthpic,heightpic,Qt::KeepAspectRatio));
        break;
    }
    case 11:
    {
        QPixmap pix(":/CardsPictures/CardsPictures/CARD11.jpg");
        widthpic = ui->roll_pic->width();
        heightpic = ui->roll_pic->height();
        ui->roll_pic->setPixmap(pix.scaled(widthpic,heightpic,Qt::KeepAspectRatio));;
        break;
    }
    case 13:
    {
        QPixmap pix(":/CardsPictures/CardsPictures/CARD13.jpg");
        widthpic = ui->roll_pic->width();
        heightpic = ui->roll_pic->height();
        ui->roll_pic->setPixmap(pix.scaled(widthpic,heightpic,Qt::KeepAspectRatio));
        break;
    }
    case 14:
    {
        QPixmap pix(":/CardsPictures/CardsPictures/CARD14.jpg");
        widthpic = ui->roll_pic->width();
        heightpic = ui->roll_pic->height();
        ui->roll_pic->setPixmap(pix.scaled(widthpic,heightpic,Qt::KeepAspectRatio));
        break;
    }
    case 16:
    {
        QPixmap pix(":/CardsPictures/CardsPictures/CARD16.jpg");
        widthpic = ui->roll_pic->width();
        heightpic = ui->roll_pic->height();
        ui->roll_pic->setPixmap(pix.scaled(widthpic,heightpic,Qt::KeepAspectRatio));
        break;
    }
    case 18:
    {
        QPixmap pix(":/CardsPictures/CardsPictures/CARD18.jpg");
        widthpic = ui->roll_pic->width();
        heightpic = ui->roll_pic->height();
        ui->roll_pic->setPixmap(pix.scaled(widthpic,heightpic,Qt::KeepAspectRatio));
        break;
    }
    case 19:
    {
        QPixmap pix(":/CardsPictures/CardsPictures/CARD19.jpg");
        widthpic = ui->roll_pic->width();
        heightpic = ui->roll_pic->height();
        ui->roll_pic->setPixmap(pix.scaled(widthpic,heightpic,Qt::KeepAspectRatio));
        break;
    }
    case 21:
    {
        QPixmap pix(":/CardsPictures/CardsPictures/CARD21.jpg");
        widthpic = ui->roll_pic->width();
        heightpic = ui->roll_pic->height();
        ui->roll_pic->setPixmap(pix.scaled(widthpic,heightpic,Qt::KeepAspectRatio));
        break;
    }
    case 23:
    {
        QPixmap pix(":/CardsPictures/CardsPictures/CARD23.jpg");
        widthpic = ui->roll_pic->width();
        heightpic = ui->roll_pic->height();
        ui->roll_pic->setPixmap(pix.scaled(widthpic,heightpic,Qt::KeepAspectRatio));
        break;
    }
    case 24:
    {
        QPixmap pix(":/CardsPictures/CardsPictures/CARD24.jpg");
        widthpic = ui->roll_pic->width();
        heightpic = ui->roll_pic->height();
        ui->roll_pic->setPixmap(pix.scaled(widthpic,heightpic,Qt::KeepAspectRatio));
        break;
    }
    case 26:
    {
        QPixmap pix(":/CardsPictures/CardsPictures/CARD26.jpg");
        widthpic = ui->roll_pic->width();
        heightpic = ui->roll_pic->height();
        ui->roll_pic->setPixmap(pix.scaled(widthpic,heightpic,Qt::KeepAspectRatio));
        break;
    }
    case 27:
    {
        QPixmap pix(":/CardsPictures/CardsPictures/CARD27.jpg");
        widthpic = ui->roll_pic->width();
        heightpic = ui->roll_pic->height();
        ui->roll_pic->setPixmap(pix.scaled(widthpic,heightpic,Qt::KeepAspectRatio));
        break;
    }
    case 29:
    {
        QPixmap pix(":/CardsPictures/CardsPictures/CARD29.jpg");
        widthpic = ui->roll_pic->width();
        heightpic = ui->roll_pic->height();
        ui->roll_pic->setPixmap(pix.scaled(widthpic,heightpic,Qt::KeepAspectRatio));
        break;
    }
    case 31:
    {
        QPixmap pix(":/CardsPictures/CardsPictures/CARD31.jpg");
        widthpic = ui->roll_pic->width();
        heightpic = ui->roll_pic->height();
        ui->roll_pic->setPixmap(pix.scaled(widthpic,heightpic,Qt::KeepAspectRatio));
        break;
    }
    case 32:
    {
        QPixmap pix(":/CardsPictures/CardsPictures/CARD32.jpg");
        widthpic = ui->roll_pic->width();
        heightpic = ui->roll_pic->height();
        ui->roll_pic->setPixmap(pix.scaled(widthpic,heightpic,Qt::KeepAspectRatio));
        break;
    }
    case 34:
    {
        QPixmap pix(":/CardsPictures/CardsPictures/CARD34.jpg");
        widthpic = ui->roll_pic->width();
        heightpic = ui->roll_pic->height();
        ui->roll_pic->setPixmap(pix.scaled(widthpic,heightpic,Qt::KeepAspectRatio));
        break;
    }
    case 37:
    {
        QPixmap pix(":/CardsPictures/CardsPictures/CARD37.jpg");
        widthpic = ui->roll_pic->width();
        heightpic = ui->roll_pic->height();
        ui->roll_pic->setPixmap(pix.scaled(widthpic,heightpic,Qt::KeepAspectRatio));
        break;
    }
    case 39:
    {
        QPixmap pix(":/CardsPictures/CardsPictures/CARD39.jpg");
        widthpic = ui->roll_pic->width();
        heightpic = ui->roll_pic->height();
        ui->roll_pic->setPixmap(pix.scaled(widthpic,heightpic,Qt::KeepAspectRatio));
        break;
    }
    case 5:
    {
        QPixmap pix(":/CardsPictures/CardsPictures/CARD5.png");
        widthpic = ui->roll_pic->width();
        heightpic = ui->roll_pic->height();
        ui->roll_pic->setPixmap(pix.scaled(widthpic,heightpic,Qt::KeepAspectRatio));
        break;
    }
    case 12:
    {
        QPixmap pix(":/CardsPictures/CardsPictures/CARD12.png");
        widthpic = ui->roll_pic->width();
        heightpic = ui->roll_pic->height();
        ui->roll_pic->setPixmap(pix.scaled(widthpic,heightpic,Qt::KeepAspectRatio));
        break;
    }
    case 15:
    {
        QPixmap pix(":/CardsPictures/CardsPictures/CARD15.png");
        widthpic = ui->roll_pic->width();
        heightpic = ui->roll_pic->height();
        ui->roll_pic->setPixmap(pix.scaled(widthpic,heightpic,Qt::KeepAspectRatio));
        break;
    }
    case 25:
    {
        QPixmap pix(":/CardsPictures/CardsPictures/CARD25.png");
        widthpic = ui->roll_pic->width();
        heightpic = ui->roll_pic->height();
        ui->roll_pic->setPixmap(pix.scaled(widthpic,heightpic,Qt::KeepAspectRatio));
        break;
    }
    case 28:
    {
        QPixmap pix(":/CardsPictures/CardsPictures/CARD28.png");
        widthpic = ui->roll_pic->width();
        heightpic = ui->roll_pic->height();
        ui->roll_pic->setPixmap(pix.scaled(widthpic,heightpic,Qt::KeepAspectRatio));
        break;
    }
    case 35:
    {
        QPixmap pix(":/CardsPictures/CardsPictures/CARD35.png");
        widthpic = ui->roll_pic->width();
        heightpic = ui->roll_pic->height();
        ui->roll_pic->setPixmap(pix.scaled(widthpic,heightpic,Qt::KeepAspectRatio));
        break;
    }
    case 4:
    {
        QPixmap pix(":/CardsPictures/CardsPictures/CARD4.png");
        widthpic = ui->roll_pic->width();
        heightpic = ui->roll_pic->height();
        ui->roll_pic->setPixmap(pix.scaled(widthpic,heightpic,Qt::KeepAspectRatio));
        break;
    }
    case 38:
    {
        QPixmap pix(":/CardsPictures/CardsPictures/CARD38.png");
        widthpic = ui->roll_pic->width();
        heightpic = ui->roll_pic->height();
        ui->roll_pic->setPixmap(pix.scaled(widthpic,heightpic,Qt::KeepAspectRatio));
        break;
    }
    default:
    {
        ui->roll_pic->setText("NO IMAGE TO DISPLAY");
        break;
    }
    }
}

rolled_occupied::~rolled_occupied()
{
    delete ui;
}

void rolled_occupied::on_occ_OK_clicked()
{
    opdata.increment_current_player();
    MainBoard board;
    board.setModal(true);
    hide();
    board.exec();
}
