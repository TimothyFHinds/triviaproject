//
//  triviagame.hpp
//  
//
//  Created by Timothy Hinds on 11/8/17.
//

#ifndef triviagame_hpp
#define triviagame_hpp

#include <iostream>
#include <string>
#include "Player.h"
#include "Question.h"
using namespace std;



//Question(question,a1,a2,a3,a4,category,correctAnswer#,hasBeenAsked?)

Question custom[];

Player createPlayer()
{
	Player Player1;
	string playerName;
	cout << "Please enter your name";
	cin >> playerName;
	return Player1(playerName, 0, 0);
}

Question customGame()
{
	int numOfQuestions = 0;
	cout << "You have chosen to create your own custom trivia game!";
	cout << "Please enter how many questions you would like your game to be:";
	cin >> numOfQuestions;

	custom[numOfQuestions];
	for(int i=0;i<numOfQuestions;i++)
	{
		cout << "Each Question has 5 values you have to fill, 1 Question, 4 answers and the category.";
		string q, a1, a2, a3, a4, cat;
		cout << "Please enter the category of the question that will be asked";
		cin >> cat;
		cout << "Please enter the question that will be asked:";
		cin >> q;
		cout << "Please enter the correct answer.";
		cin >> a1;
		cout << "Now, enter an incorrect answer choice.";
		cin >> a2;
		cout << "Another wrong answer choice.";
		cin >> a3;
		cout << "The last wrong answer choice";
		cin >> a4;
		cout << "Good Job! On to the next Question";

		custom[i] = Question(q,a1,a2,a3,a4,cat,1,false);

	}

	return custom;


}



#endif /* triviagame_hpp */
