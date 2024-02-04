/*#include "GameMode.h"
using namespace std;
#include<iostream>
GameM* startGame()
{
	GameM* gameM = nullptr;
	char GameMode;
	cout << "For Regular mode, Enter R" << endl;
	cout << "For high-definition mode, Enter H" << endl;
	cin >> GameMode;
	if (GameMode == 'r' || GameMode == 'R')
	{
		gameM = new GameM<int>();
	}
	else
		if (GameMode == 'H' || GameMode == 'h')
		{
			gameM = new GameM<double>();
		}
	return gameM;
}*/
//GameMode.cpp - file containing the user input for the game mode
//NAME:INDERPREET SINGH PARMAR
//STUDENT ID : 164132219
//MAIL ID : iparmar1@myseneca.ca
//Date: 23 July 2022
#include "Game.h"
using namespace std;
GameM* startGame()
{
	GameM* gameM = nullptr;
char  GameMode;
cout << "For Regular mode, Enter R" << endl;
cout << "For high-definition mode, Enter H" << endl;
cin >> GameMode;
if (GameMode == 'r' || GameMode == 'R')
{
	gameM = new Game<int>();
}
else
if (GameMode == 'H' || GameMode == 'h')
{
	gameM = new Game<double>();
}
return gameM;
}