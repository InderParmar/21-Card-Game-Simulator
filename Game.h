//Game.h - file  containg function declarations and definitions
//NAME:INDERPREET SINGH PARMAR
//STUDENT ID : 164132219
//MAIL ID : iparmar1@myseneca.ca
//Date: 23 July 2022
#ifndef _GAME_H_
#define _GAME_H_
using namespace std;
#include "GameMode.h"
#include "PlayerYouth.h"
#include "PlayerAdult.h"
constexpr int MAXP{ 2 }; //max players
constexpr int MAXS{ 21 }; //max score

template<typename l>
class Game : public GameM {
	PlayerBase<l>* player[MAXP];
public:
	Game() {
		player[0] = new PlayerYouth<l>("Noah");
		player[1] = new PlayerAdult<l>("Kenneth");
	}
	~Game() {
		delete[] player;
	}

	void run() {
		bool GAMEOVER = false;
		do {
			double betAmount = 0.0;
			do {
				cout << "How much do you want to bet? (min $10, max $300): $";//asking the betting amount
				cin >> betAmount;
			} while (betAmount < 10 || betAmount > 300);

			int numOfDepCards, numOfAtCards;
			string addCard;
			for (int i = 0; i < MAXP; ++i) {
				cout.setf(ios::fixed);
				cout.precision(3);
				cout << player[i]->getName() << ", how many dependent cards do you want? ";// asking the player for the number of dependent cards
				cin >> numOfDepCards;
				player[i]->DependentCards(numOfDepCards);

				cout << player[i]->getName() << ", how many attack cards do you want? ";// asking the player for the number of attack cards
				cin >> numOfAtCards;
				player[i]->AttackCards(numOfAtCards);
				cout << player[i]->getName() << ", the sum of your cards is " << player[i]->sumOfAllCards() << endl;
				cout << "Do you want to add a dependent card? [Y,N] ";
				cin >> addCard;
				if (addCard == "y" || addCard == "Y")
					player[i]->addDependentCard1();
				cout << player[i]->getName() << ", the sum of your cards is " << player[i]->sumOfAllCards() << endl;
				cout << "Do you want to add an attack card? [Y,N] ";
				cin >> addCard;
				if (addCard == "y" || addCard == "Y")
					player[i]->addAttackCard1();
				cout << player[i]->getName() << ", the sum of your cards is " << player[i]->sumOfAllCards() << endl << endl;
			}
			for (int i = 0; i < MAXP; i++) {
				cout << player[i]->getName() << " has " << player[i]->sumOfAllCards() << " points." << endl;
			}
			cout << endl;
			if (player[0]->sumOfAllCards() > MAXS && player[1]->sumOfAllCards() > MAXS)
			{
				cout << player[0]->getName() << " has a sum of " << player[0]->sumOfAllCards() << ", which is over the limit." << endl
					<< player[1]->getName() << " has a sum of " << player[1]->sumOfAllCards() << ", which is over the limit." << endl
					<< "Both players are over the limit and have been disqualified." << endl << endl;

			}
			else
				if (player[0]->sumOfAllCards() > MAXS && player[1]->sumOfAllCards() < MAXS)
				{
					cout << player[0]->getName() << " has a sum of " << player[0]->sumOfAllCards() << ", which is over the limit." << endl
						<< player[0]->getName() << " has been disqualified for going over the limit." << player[1]->getName() << " has won." << endl;
					*player[0] << betAmount;
					*player[1] >> betAmount;
				}
				else
					if (player[0]->sumOfAllCards() < MAXS && player[1]->sumOfAllCards() > MAXS)
					{
						cout << player[1]->getName() << " has a sum of " << player[1]->sumOfAllCards() << ", which is over the limit." << endl
							<< player[1]->getName() << " has been disqualified for going over the limit." << player[0]->getName() << " has won." << endl;
						*player[1] << betAmount;
						*player[0] >> betAmount;
					}
					else
						if (player[0] > player[1])
						{
							std::cout << player[0]->getName() << " has won!" << endl;
							*player[1] << betAmount;
							*player[0] >> betAmount;
						}
						else
							if (player[0] < player[1])
							{
								std::cout << player[1]->getName() << " has won!" << endl;
								*player[0] << betAmount;
								*player[1] >> betAmount;
							}
							else
							{
								if (player[0] == player[1]) cout << player[0]->getName() << " and " << player[1]->getName() << " have the same score. So there is no winner." << endl;
							}
			if (player[0]->GetCash() <= 0 || player[1]->GetCash() <= 0)
				GAMEOVER = true;
			else
			{
				cout << endl;
				for (int i = 0; i < MAXP; i++) {
					player[i]->displayCash();
				}cout << endl;
			}
		} while (!GAMEOVER);
		if (player[0]->GetCash() <= 0)
			cout << "Player " << player[0]->getName() << " is out of the game." << endl;
		if (player[1]->GetCash() <= 0)
			cout << "Player " << player[1]->getName() << " is out of the game." << endl;
		cout << endl;
				cout << player[0]->getName() << " has $" << player[0]->GetCash() << "."<<endl;
		cout << player[1]->getName() << " has $" << player[1]->GetCash() << "."<<endl;
		cout << endl;
		cout << "The game is over." << endl;
		for (int i = 0; i < MAXP; i++) {
			player[i]->displayCash();
		}
		
	}
};
#endif //_GAME_H_