/*
 * Question.cpp
 *
 *  Created on: Nov 15, 2017
 *      Author: tim
 */

#include "Question.h"
#include <iostream>
#include <string>
using namespace std;

Question::Question(const string &q, const string &a1, const string a2, const string a3, const string a4, const string cat, int right, bool hasAsked)
{
	// TODO Auto-generated constructor stub

	question = q;
	answer1 = a1;
	answer2 = a2;
	answer3 = a3;
	answer4 = a4;
	category = cat;
	correctAnswer = (right);
	hasBeenAsked = hasAsked;

	//thats all of the constructor info
}





Question::~Question()
{
	// TODO Auto-generated destructor stub
}

