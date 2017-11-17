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

void Question::Question(const string &q, const string &a1, const string a2, const string a3, const string a4, const string cat, int right, bool asked)
{
	// TODO Auto-generated constructor stub

	//Question(question,a1,a2,a3,a4,category,correctAnswer#,hasBeenAsked?)
	question = q;
	answer1 = a1;
	answer2 = a2;
	answer3 = a3;
	answer4 = a4;
	category = cat;
	correctAnswer = (right);
	hasBeenAsked = asked;

	//thats all of the constructor info
}

//SETTERS!!!
void Question::setQuestion(string q)
{
	question = q;
}
void Question::setAnswer1(string a1)
{
	answer1 = a1;
}
void Question::setAnswer2(string a2)
{
	answer2 = a2;
}
void Question::setAnswer3(string a3)
{
	answer3 = a3;
}
void Question::setAnswer4(string a4)
{
	answer4 = a4;
}
void Question::setCorrect(int right)
{
	correctAnswer = right;
}
void Question::setCategory(string cat)
{
	category = cat;
}
void Question::setAsked(bool hasAsked)
{
	hasBeenAsked = hasAsked;
}







//GETTERS!!!
string Question::getQuestion()const
{
	return question;
}

string Question::getAnswer1()const
{
	return answer1;
}
string Question::getAnswer2()const
{
	return answer2;
}
string Question::getAnswer3()const
{
	return answer3;
}
string Question::getAnswer4()const
{
	return answer4;
}
int Question::getCorrect()const
{
	return correctAnswer;
}
string Question::getCategory()const
{
	return category;
}
bool Question::getAsked()const
{
	return hasBeenAsked;
}



void Question::displayInfo()
{
	cout << getCategory() << endl;
	cout << getQuestion() << endl;
	cout << getAnswer1() << endl;
	cout << getAnswer2() << endl;
	cout << getAnswer3() << endl;
	cout << getAnswer4() << endl;

}


Question::~Question()
{
	// TODO Auto-generated destructor stub



}










