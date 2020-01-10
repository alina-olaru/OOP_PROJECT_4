#pragma once
#include "candidati.h"
class candidati_a_doua:public candidati
{
	//id
	std::string domeniu_absolvit;
public:
	candidati_a_doua();
	std::string get_domeniu_absolvit() const;
	void set_domeniu_absolvit(std::string domeniu_absolvit);

	candidati_a_doua(std::string domeniu_absolvit)
		: domeniu_absolvit(domeniu_absolvit)
	{
	}
	void afis();
	void citire();
};

