//PlayerAdult.h - file  containg function declarations and definitions
//NAME:INDERPREET SINGH PARMAR
//STUDENT ID : 164132219
//MAIL ID : iparmar1@myseneca.ca
//Date: 23 July 2022
#ifndef _PLAYERADULT_H_
#define _PLAYERADULT_H_
#include "PlayerBase.h"
constexpr int MAX1{ 15 };
template<typename l>
class PlayerAdult : public PlayerBase<l> //INHERITING CLASS PlayerBase
{
public:
	PlayerAdult() : PlayerBase<l>() {}
	PlayerAdult(std::string name) : PlayerBase<l>(name) {}
	PlayerAdult(const PlayerAdult& player) : PlayerBase<l>(player) {}
	PlayerAdult& operator=(const PlayerAdult& player) {
		PlayerBase<l>::operator=(player);
		return *this;
	}

	void AttackCards(int add_att_card) // function for adding attack cards
	{
		this->AtCards.clear();
		for (int i = 0; i < add_att_card; ++i) {
			addAttackCard1();
		}
	}
	void addAttackCard1()//function for adding one attack card
	{
		this->AtCards.push_back(((l)rand()) / (l)(RAND_MAX / (MAX1 - 2)));
	}
	l sumOfACards()//function for getting sum of attack cards
	{
		l sum = std::accumulate(this->AtCards.begin(), this->AtCards.end(),
			decltype(this->AtCards)::value_type(0));
		return sum;
	}
	l sumOfAllCards()//function for getting sum of all cards
	{
		l sum = this->sumOfDepCards() + this->sumOfACards();
		return sum;
	}
	~PlayerAdult();
};
#endif //_PLAYERADULT_H_