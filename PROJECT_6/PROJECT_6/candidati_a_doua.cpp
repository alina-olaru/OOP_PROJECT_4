#include "candidati_a_doua.h"
#include <iostream>
using namespace std;

candidati_a_doua::candidati_a_doua()
{
	this->domeniu_absolvit = 'CTI';
}

std::string candidati_a_doua::get_domeniu_absolvit() const
{
	return domeniu_absolvit;
}

void candidati_a_doua::set_domeniu_absolvit(std::string domeniu_absolvit)
{
	this->domeniu_absolvit = domeniu_absolvit;
}

void candidati_a_doua::afis()
{
	candidati::afis();
	cout << this->domeniu_absolvit << "domeniu absolvit";
}

void candidati_a_doua::citire()
{
	candidati::citire();
	cout << "domeniu absolvit";
	cin >> this->domeniu_absolvit;
}
