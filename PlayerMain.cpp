//PlayerMain.cpp - main program for the card player
//PlayerMain.cpp - main program for the card player
//NAME:INDERPREET SINGH PARMAR
//STUDENT ID : 164132219
//MAIL ID : iparmar1@myseneca.ca
//Date: 23 July 2022
#include<iostream>
#include "GameMode.h"
//I have done all the coding by myself and only copied the code that my professor provided to complete my workshops and assignments.
using namespace std;

int main(void) // execution starts here
{
	GameM* CardGame21 = startGame();//starting the game
	CardGame21->run();//running the game
	delete CardGame21;//clearing up the data
	//Main file is not used for writing the major code because I want to prevent data leaks and keep the most of the data as protected 
	return 0;
}