#include "cyclock.h"
#include "ui_cyclock.h"
#include <QtWidgets>
#include <iostream>
#include <fstream>
#include <cstdlib>
#include <string>
#include <iostream>
#include <stdio.h>
#include <time.h>       /* time */
#include <ctype.h>
#include <ctime>
#include <stdio.h>
#include <QMessageBox>
#include <QPixmap>
#include <sstream>

cyclock::cyclock(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::cyclock)
{
    ui->setupUi(this);

    QTimer *timer = new QTimer(this);
    connect(timer, SIGNAL(timeout()), this, SLOT(clockrun()));
    timer->start();



   // clockrun();


}

cyclock::~cyclock()
{
    delete ui;
}

void cyclock::clockrun()
{

    const QTime time = QTime::currentTime();

    const int hournow = time.hour();

    ui->lcdNumber->display(hournow);

    const int minnow = time.minute();

    ui->lcdNumber_2->display(minnow);

    const int secnow = time.second();

    ui->lcdNumber_3->display(secnow);

}

