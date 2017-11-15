#ifndef QUESTION_H_
#define QUESTION_H_

#include <iostream>
#include <string>

Player::Player(int score, string name, int numOfGamesPlayed);
{
	this->score = score;
	this->name = name;
	this->numOfGamesPlayed = numOfGamesPlayed;
}

void Player::setScore(int score)
{
	this->score = score;
}

int getScore()
{
	return this->score;
}

string getName()
{
	return this->name;
}

void setnumOfGamesPlayed(int numOfGamesPlayed)
{
	this->numOfGamesPlayed = numOfGamesPlayed;
}

int getnumOfGamesPlayed()
{
	return this->numOfGamesPlayed;
}



#endif