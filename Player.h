/*
 * Player.h
 *
 *  Created on: Nov 17, 2017
 *      Author: tim
 */

#ifndef PLAYER_H_
#define PLAYER_H_

#include <string>
#include <iostream>
using namespace std;

class Player
{
private:
	int score;
	string name;
	int numOfGamesPlayed;

public:
	Player(int score, string name, int numOfGamesPlayed);

	void setScore(int score);
	int getScore();

	void setName(string name);
	string getName();

	void setNumOfGamesPlayed(int numOfGamesPlayed);
	int getNumOfGamesPlayed();

	void displayInfo();
	virtual ~Player();
};

#endif /* PLAYER_H_ */
