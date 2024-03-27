#ifndef GUI_H
#define GUI_H

class GUI : public QMainWindow {
    Q_OBJECT

private:
    QPushButton* rollDiceButton;
    QPushButton* makeMoveButton;
    QPushButton* quitButton;
    QPushButton* viewLeaderboardButton;
    QLabel* playerNameLabel;
    QLabel* turnLabel;
    QLabel* gameStatusLabel;

public:
    GUI(QWidget* parent = nullptr);
    void updatePlayerName(const QString& playerName);
    void updateTurnLabel(const QString& turnText);
    void updateGameStatus(const QString& statusText);

signals:
    void rollDiceRequested();
    void makeMoveRequested();
    void quitGameRequested();
    void viewLeaderboardRequested();

private slots:
    void handleRollDiceButtonClicked();
    void handleMakeMoveButtonClicked();
    void handleQuitButtonClicked();
    void handleViewLeaderboardButtonClicked();
};

#endif // GUI_H
