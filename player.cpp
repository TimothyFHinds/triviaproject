/*
 * Player.cpp
 *
 *  Created on: Nov 17, 2017
 *      Author: tim
 */

#include "Player.h"
#include <string>
#include <iostream>
using namespace std;


void Player::Player(int sco, string nam, int games)
{
	score = sco;
	name = nam;
	numOfGamesPlayed = games;
}



void Player::setScore(int sco)
{
	score = sco;
}

void Player::setName(string nam)
{
	name = nam;
}

void Player::setNumOfGamesPlayed(int games)
{
	numOfGamesPlayed = games;
}



int Player::getScore()
{
	return score;
}
string Player::getName()
{
	return name;
}
int Player::getNumOfGamesPlayed()
{
	return numOfGamesPlayed;
}




void Player::displayInfo()
{
	cout << getName();
	cout << getScore();
	cout << getNumOfGamesPlayed();
}



