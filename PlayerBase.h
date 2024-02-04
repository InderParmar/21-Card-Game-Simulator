//PlayerBase.h-file  containg function declarations and definitions
//NAME:INDERPREET SINGH PARMAR
//STUDENT ID : 164132219
//MAIL ID : iparmar1@myseneca.ca
//Date: 23 July 2022
#ifndef _PLAYERBASE_H
#define _PLAYERBASE_H
#include <iostream>
#include <vector>
#include <numeric>
using namespace std;
template <typename l>
class PlayerBase {
protected:
	string name;
	double cash;
	vector<int> DepCards;
	vector<l> AtCards;
public:
	PlayerBase() : name(""), cash(1000) {};
	PlayerBase(string name) : name(name), cash(1000) {};

	PlayerBase(const PlayerBase& player)
	{
		this->DepCards = nullptr;
		this->AtCards = nullptr;
		*this = player;
	}
	PlayerBase& operator=(const PlayerBase& player)
	{
		if (this != player)
		{
			this->name = player.name;
			this->cash = player.cash;
			DepCards.erase;
			AtCards.erase;
			if (player.DepCards != nullptr) this->DepCards = player.DepCards;
			if (player.attackCards != nullptr) this->attackCards = player.attackCards;
			return *this;
		}
	}
	virtual l sumOfAllCards() = 0;
	virtual void addAttackCard1() = 0;
	virtual void AttackCards(int) = 0;
	string getName() const
	{
		return this->name;
	}
	bool SetName(string name)
	{
		bool set = false;
		if (name != "") {
			this->name = name;
			set = true;
		}
		return set;
	}
	double GetCash() const {
		return this->cash;
	}
	void displayCash() {
		cout << this->name << " has $" << this->GetCash() << "." << endl;
	}
	void DependentCards(int num) {
		this->DepCards.clear();
		for (int i = 0; i < num; i++)
		{
			this->DepCards.push_back(rand() % 5);
		}
	}
	void addDependentCard1()
	{
		this->DepCards.push_back(rand() % 5);
	}
	int sumOfDepCards()
	{
		int sumOfDepCards = 0;
		sumOfDepCards = std::accumulate(this->DepCards.begin(), this->DepCards.end(), 0);
		return sumOfDepCards;
	}
	void addingCash(double cash)
	{
		this->cash += cash;
	}
	bool operator==(const PlayerBase& player2)
	{
		bool BothSame = false;
		if (this->sumOfAllCards() == player2.sumOfAllCards())
			BothSame = true;
		return BothSame;
	}
	bool operator>(const PlayerBase& player2)
	{
		bool MoreThan = false;
		if (this->sumOfAllCards() > player2.sumOfAllCards())
			MoreThan = true;
		return MoreThan;
	}
	bool operator<(const PlayerBase& player2)
	{
		bool less = false;
		if (this->sumOfAllCards() < player2.sumOfAllCards())
			less = true;
		return less;
	}
	void operator>>(double cash)
	{
		this->cash += cash;
	}
	void operator<<(l cash)
	{
		this->cash -= cash;
	}
	~PlayerBase()
	{
	}
};
#endif 