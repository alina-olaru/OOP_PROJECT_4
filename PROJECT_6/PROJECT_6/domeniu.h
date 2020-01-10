#pragma once
#include <vector>
#include "candidati.h"
#include <iostream>
using namespace std;

class domeniu
{
private:
	string nume_domeniu;
public:
	std::vector<candidati> cand;
	virtual void citire();
	virtual void afisare();


	string get_nume_domeniu() const;
	void set_nume_domeniu(string nume_domeniu);
	std::vector<candidati> get_cand() const;
	void set_cand(std::vector<candidati> candidatis);
};

