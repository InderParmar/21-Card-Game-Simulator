//GameMode.h - file containing class to add the feature of choosing game mode 
//NAME:INDERPREET SINGH PARMAR
//STUDENT ID : 164132219
//MAIL ID : iparmar1@myseneca.ca
//Date: 23 July 2022
#ifndef _GAMEMODE_H_
#define _GAMEMODE_H_

enum class GameMode {
	Regular,
	HighDefinition
};

class GameM {
public:
	virtual void run() = 0;
	virtual ~GameM() {};
};
GameM* startGame();
#endif //_GAMEMODE_H_