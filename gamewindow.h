#ifndef GAMEWINDOW_H
#define GAMEWINDOW_H

#include <QWidget>

QT_BEGIN_NAMESPACE
namespace Ui { class GameWindow; }
QT_END_NAMESPACE

class GameWindow : public QWidget
{
    Q_OBJECT

public:
    GameWindow(QWidget *parent = nullptr);
    ~GameWindow();

private:
    Ui::GameWindow *ui;
};
#endif // GAMEWINDOW_H
