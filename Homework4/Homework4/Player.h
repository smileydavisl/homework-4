#ifndef PLAYER_H
#define PLAYER_H
#include <QString>

class Player{
private:
    QString playerName;
    int wins;
    int gamesPlayed;
    double winPercent;

public:
    Player(const QString& name);
    QString getPlayedName() const;
    int getWins() const;
    int getGamesPlayed() const;

    void incrementWins();
    void incremenentGamesPlayed();
    double getWinPercent() const;

};

#endif // PLAYER_H
