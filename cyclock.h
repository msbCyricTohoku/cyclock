#ifndef CYCLOCK_H
#define CYCLOCK_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class cyclock; }
QT_END_NAMESPACE

class cyclock : public QMainWindow
{
    Q_OBJECT

public:
    cyclock(QWidget *parent = nullptr);
    ~cyclock();

private slots:
    void clockrun();

private:
    Ui::cyclock *ui;
};
#endif // CYCLOCK_H
