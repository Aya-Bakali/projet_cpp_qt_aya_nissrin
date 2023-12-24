#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QPushButton>
#include <QVector>
#include <QButtonGroup>

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();




    // Autres membres de l'interface...


private slots:
    void on_pushButton_17_clicked();
    void on_pushButton_clicked();
    void on_pushButton_2_clicked();
    void on_pushButton_5_clicked();

    // Slots pour les boutons du joueur humain
    void onPlayerHumanButtonClick(QPushButton *button);

    // Slots pour les boutons du joueur informatique
    void onPlayerComputerButtonClick(QPushButton *button);

    void on_pushButton_14_clicked();
    void on_pushButton_12_clicked();
    void on_pushButton_10_clicked();
    void on_pushButton_7_clicked();
    void on_pushButton_6_clicked();

    void on_pushButton_9_clicked();
    void on_pushButton_8_clicked();
    void on_pushButton_13_clicked();
    void on_pushButton_15_clicked();
    void on_pushButton_11_clicked();

private:
    Ui::MainWindow *ui;
    QVector<QPixmap> cardImages;
    int scoreJoueur1;
    int scoreAI;

    void showButtons(QVector<QPushButton *> &buttons);
    void distributeCardImages(QVector<QPushButton *> &buttons);
    void animateCardMove(QPushButton *sourceButton, QPushButton *destinationButton);


    QButtonGroup *buttonGroupHuman;
    QButtonGroup *buttonGroupComputer;


};

#endif // MAINWINDOW_H
