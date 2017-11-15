/*
 * Question.h
 *
 *  Created on: Nov 15, 2017
 *      Author: tim
 */

#ifndef QUESTION_H_
#define QUESTION_H_

#include <string>
using namespace std;


class Question
{
private:
	string question;
	string answer1;
	string answer2;
	string answer3;
	string answer4;
	int correctAnswer;
	bool hasBeenAsked;


public:
	Question(const string &, const string &, const string &, const string &,
			const string &, int, bool asked);

	void setQuestion(const string);
	string getQuestion()const;

	void setAnswer1(const string);
	string getAnswer1()const;

	void setAnswer2(const string);
	string getAnswer2()const;

	void setAnswer3(const string);
	string getAnswer3()const;

	void setAnswer1(const string);
	string getAnswer1()const;

	void setCorrect(int);
	int getCorrect()const;

	void setAsked(bool);
	bool getAsked()const;

	void displayInfo();


	virtual ~Question();
};





#endif /* QUESTION_H_ */
