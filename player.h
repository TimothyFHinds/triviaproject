#ifndef PLAYER_H_
#define PLAYER_H_

#include <iostream>
#include <string>


class Player()
{
private:
	int score;
	string name;
	int numOfGamesPlayed;

public:
	Player(int score, string name, int numOfGamesPlayed);

	void setScore(int score);
	int getScore();

	string getName();

	void setnumOfGamesPlayed(int numOfGamesPlayed);
	int getnumOfGamesPlayed();
}

#endif
