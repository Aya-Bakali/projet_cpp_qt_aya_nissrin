#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QPropertyAnimation>
#include <QPixmap>
#include <QPushButton>
#include <random>
#include <QButtonGroup>

MainWindow::MainWindow(QWidget *parent) : QMainWindow(parent), ui(new Ui::MainWindow),

    buttonGroupHuman(new QButtonGroup(this)),
    buttonGroupComputer(new QButtonGroup(this))

{
    ui->setupUi(this);

    buttonGroupHuman->addButton(ui->pushButton_14);
    buttonGroupHuman->addButton(ui->pushButton_12);
    buttonGroupHuman->addButton(ui->pushButton_10);
    buttonGroupHuman->addButton(ui->pushButton_6);
    buttonGroupHuman->addButton(ui->pushButton_7);

    buttonGroupComputer->addButton(ui->pushButton_9);
    buttonGroupComputer->addButton(ui->pushButton_8);
    buttonGroupComputer->addButton(ui->pushButton_13);
    buttonGroupComputer->addButton(ui->pushButton_11);
    buttonGroupComputer->addButton(ui->pushButton_15);



    // Chargez les images et associez-les au bouton pushButton_17
    cardImages.push_back(QPixmap(":/image/00.gif"));
    cardImages.push_back(QPixmap(":/image/01.gif"));
    cardImages.push_back(QPixmap(":/image/02.gif"));
    cardImages.push_back(QPixmap(":/image/03.gif"));
    cardImages.push_back(QPixmap(":/image/04.gif"));
    cardImages.push_back(QPixmap(":/image/05.gif"));
    cardImages.push_back(QPixmap(":/image/06.gif"));
    cardImages.push_back(QPixmap(":/image/07.gif"));
    cardImages.push_back(QPixmap(":/image/08.gif"));
    cardImages.push_back(QPixmap(":/image/09.gif"));
    cardImages.push_back(QPixmap(":/image/10.gif"));
    cardImages.push_back(QPixmap(":/image/11.gif"));
    cardImages.push_back(QPixmap(":/image/12.gif"));
    cardImages.push_back(QPixmap(":/image/13.gif"));
    cardImages.push_back(QPixmap(":/image/14.gif"));
    cardImages.push_back(QPixmap(":/image/15.gif"));
    cardImages.push_back(QPixmap(":/image/16.gif"));
    cardImages.push_back(QPixmap(":/image/17.gif"));
    cardImages.push_back(QPixmap(":/image/18.gif"));
    cardImages.push_back(QPixmap(":/image/19.gif"));
    cardImages.push_back(QPixmap(":/image/20.gif"));
    cardImages.push_back(QPixmap(":/image/21.gif"));
    cardImages.push_back(QPixmap(":/image/22.gif"));
    cardImages.push_back(QPixmap(":/image/23.gif"));
    cardImages.push_back(QPixmap(":/image/24.gif"));
    cardImages.push_back(QPixmap(":/image/25.gif"));
    cardImages.push_back(QPixmap(":/image/26.gif"));
    cardImages.push_back(QPixmap(":/image/27.gif"));
    cardImages.push_back(QPixmap(":/image/28.gif"));
    cardImages.push_back(QPixmap(":/image/29.gif"));
    cardImages.push_back(QPixmap(":/image/30.gif"));
    cardImages.push_back(QPixmap(":/image/31.gif"));
    cardImages.push_back(QPixmap(":/image/32.gif"));
    cardImages.push_back(QPixmap(":/image/33.gif"));
    cardImages.push_back(QPixmap(":/image/34.gif"));
    cardImages.push_back(QPixmap(":/image/35.gif"));
    cardImages.push_back(QPixmap(":/image/36.gif"));
    cardImages.push_back(QPixmap(":/image/37.gif"));
    cardImages.push_back(QPixmap(":/image/38.gif"));
    cardImages.push_back(QPixmap(":/image/39.gif"));
    // Ajoutez les autres images de cartes de manière similaire

    // Associez les images au bouton pushButton_17
    for (const QPixmap &image : cardImages)
    {
        ui->pushButton_17->setIcon(QIcon(image));
        ui->pushButton_17->setIconSize(ui->pushButton_17->size());
    }

    connect(ui->pushButton_14, &QPushButton::clicked, this, &MainWindow::on_pushButton_14_clicked);
    connect(ui->pushButton_12, &QPushButton::clicked, this, &MainWindow::on_pushButton_12_clicked);
    connect(ui->pushButton_10, &QPushButton::clicked, this, &MainWindow::on_pushButton_10_clicked);
    connect(ui->pushButton_6, &QPushButton::clicked, this, &MainWindow::on_pushButton_6_clicked);
    connect(ui->pushButton_7, &QPushButton::clicked, this, &MainWindow::on_pushButton_7_clicked);
    // Connectez les autres boutons du joueur humain de manière similaire

    connect(ui->pushButton_9, &QPushButton::clicked, this, &MainWindow::on_pushButton_9_clicked);
    connect(ui->pushButton_8, &QPushButton::clicked, this, &MainWindow::on_pushButton_8_clicked);
    connect(ui->pushButton_13, &QPushButton::clicked, this, &MainWindow::on_pushButton_13_clicked);
    connect(ui->pushButton_11, &QPushButton::clicked, this, &MainWindow::on_pushButton_11_clicked);
    connect(ui->pushButton_15, &QPushButton::clicked, this, &MainWindow::on_pushButton_15_clicked);
    // Connectez les autres boutons du joueur informatique de manière similaire

    for (const QPixmap &image : cardImages)
    {
        ui->pushButton_17->setIcon(QIcon(image));
        // Modifiez la taille de l'icône ici
        ui->pushButton_17->setIconSize(QSize(300, 700));
    }


}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::showButtons(QVector<QPushButton *> &buttons)
{
    for (int i = 0; i < buttons.size(); ++i)
    {
        // Animation des boutons
        QPropertyAnimation *animation = new QPropertyAnimation(buttons[i], "pos");
        animation->setDuration(500); // Durée de l'animation en millisecondes
        animation->setStartValue(QPoint(buttons[i]->x(), buttons[i]->y() - 1100)); // Position de départ
        animation->setEndValue(QPoint(buttons[i]->x(), buttons[i]->y()));           // Position finale

        // Connectez le signal finished à la suppression de l'animation
        connect(animation, &QPropertyAnimation::finished, animation, &QPropertyAnimation::deleteLater);

        // Démarrez l'animation
        animation->start(QPropertyAnimation::DeleteWhenStopped);
    }
}

void MainWindow::distributeCardImages(QVector<QPushButton *> &buttons)
{
    qDebug() << "Distributing card images to buttons.";

    // Distribuez les images aux boutons
    for (int i = 0; i < buttons.size(); ++i)
    {
        if (i < cardImages.size())
        {
            buttons[i]->setIcon(QIcon(cardImages[i]));
            buttons[i]->setIconSize(buttons[i]->size());
        }
    }
}

void MainWindow::on_pushButton_17_clicked()
{
    qDebug() << "PushButton_17 clicked";

    // Vecteur de boutons à mettre à jour
    QVector<QPushButton *> targetButtons = {ui->pushButton_14, ui->pushButton_7, ui->pushButton_6, ui->pushButton_12, ui->pushButton_10,
                                            ui->pushButton_13, ui->pushButton_15, ui->pushButton_8, ui->pushButton_9, ui->pushButton_11};

    // Distribuez les images aux boutons
    for (int i = 0; i < targetButtons.size(); ++i)
    {
        for (int j = 0; j < 4; ++j)
        {
            int index = i * 4 + j; // Calcul de l'index dans le vecteur cardImages
            if (index < cardImages.size())
            {
                targetButtons[i]->setIcon(QIcon(cardImages[index]));
                targetButtons[i]->setIconSize(targetButtons[i]->size());
            }
        }

        // Animation des boutons
        QPropertyAnimation *animation = new QPropertyAnimation(targetButtons[i], "pos");
        animation->setDuration(500); // Durée de l'animation en millisecondes
        animation->setStartValue(QPoint(targetButtons[i]->x(), targetButtons[i]->y() - 700)); // Position de départ
        animation->setEndValue(QPoint(targetButtons[i]->x(), targetButtons[i]->y()));           // Position finale

        // Connectez le signal finished à la suppression de l'animation
        connect(animation, &QPropertyAnimation::finished, animation, &QPropertyAnimation::deleteLater);

        // Démarrez l'animation
        animation->start(QPropertyAnimation::DeleteWhenStopped);
    }
}


void MainWindow::on_pushButton_clicked()
{
    ui->stackedWidget->setCurrentIndex(1);
}

void MainWindow::on_pushButton_2_clicked()
{
    QApplication::quit();
}

void MainWindow::on_pushButton_5_clicked()
{
    ui->stackedWidget->setCurrentIndex(2);
}




void MainWindow::onPlayerComputerButtonClick(QPushButton *button) {
    // Obtenez l'index du bouton cliqué
    int index = ui->horizontalLayoutWidget_3->layout()->indexOf(button);

    // Obtenez le bouton de destination correspondant
    QPushButton *destinationButton = ui->pushButton_18;

    // Déplacez l'image vers le bouton de destination
    animateCardMove(button, destinationButton);

    // Autres actions à effectuer pour le joueur informatique
    // ...

    // Exemple : Affichez un message dans la console
    qDebug() << "Joueur informatique a cliqué sur le bouton " << index;
}

// Méthode pour animer le déplacement de l'image vers un autre bouton
void MainWindow::animateCardMove(QPushButton *sourceButton, QPushButton *destinationButton) {
    // Créez une animation de propriété pour déplacer le bouton
    QPropertyAnimation *animation = new QPropertyAnimation(sourceButton, "geometry");
    animation->setDuration(500); // Durée de l'animation en millisecondes
    animation->setStartValue(sourceButton->geometry()); // Position de départ
    animation->setEndValue(destinationButton->geometry()); // Position finale

    // Connectez le signal finished à la suppression de l'animation
    connect(animation, &QPropertyAnimation::finished, animation, &QPropertyAnimation::deleteLater);

    // Démarrez l'animation
    animation->start(QPropertyAnimation::DeleteWhenStopped);
}

void MainWindow::on_pushButton_14_clicked() {
    onPlayerHumanButtonClick(ui->pushButton_14);
}

void MainWindow::on_pushButton_12_clicked() {
    onPlayerHumanButtonClick(ui->pushButton_12);
}

void MainWindow::on_pushButton_10_clicked() {
    onPlayerHumanButtonClick(ui->pushButton_12);
}

void MainWindow::on_pushButton_7_clicked() {
    onPlayerHumanButtonClick(ui->pushButton_12);
}

void MainWindow::on_pushButton_6_clicked() {
    onPlayerHumanButtonClick(ui->pushButton_12);
}
// Répétez pour les autres boutons du joueur humain

void MainWindow::on_pushButton_9_clicked() {
    onPlayerComputerButtonClick(ui->pushButton_9);
}

void MainWindow::on_pushButton_8_clicked() {
    onPlayerComputerButtonClick(ui->pushButton_9);
}

void MainWindow::on_pushButton_13_clicked() {
    onPlayerComputerButtonClick(ui->pushButton_9);
}

void MainWindow::on_pushButton_11_clicked() {
    onPlayerComputerButtonClick(ui->pushButton_9);
}

void MainWindow::on_pushButton_15_clicked() {
    onPlayerComputerButtonClick(ui->pushButton_8);
}

void MainWindow::onPlayerHumanButtonClick(QPushButton *button) {
    int index = ui->horizontalLayoutWidget->layout()->indexOf(button);

    // Exemple : Mettez à jour le score du joueur humain
    scoreJoueur1 += index;
    ui->label_10->setText(QString("%1").arg(scoreJoueur1));

    // Exemple : Affichez un message dans la console
    qDebug() << "Joueur humain a cliqué sur le bouton " << index;

    // Autres actions spécifiques du joueur humain
    // ...

    // Déplacez l'image vers le bouton de destination
    animateCardMove(button, ui->pushButton_16);
}
