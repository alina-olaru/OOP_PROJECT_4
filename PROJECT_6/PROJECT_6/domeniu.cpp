#include "domeniu.h"
#include <iostream>
using namespace std;
void domeniu::citire()
{
	cout << "Nume domeniu ";
	cin >> this->nume_domeniu;
	
	for(auto i:this->cand)
	{
		//cu rtti + faptul ca citire si afis sunt virtuale-->apeleaza functia potrivita 
		i.citire();
	}
}

void domeniu::afisare()
{

	cout << "Nume domeniu ";
	cout << this->nume_domeniu;

	for (auto i : this->cand)
	{
		i.afis();
	}
	
}

string domeniu::get_nume_domeniu() const
{
	return nume_domeniu;
}

void domeniu::set_nume_domeniu(string nume_domeniu)
{
	this->nume_domeniu = nume_domeniu;
}

std::vector<candidati> domeniu::get_cand() const
{
	return cand;
}

void domeniu::set_cand(std::vector<candidati> candidatis)
{
	cand = candidatis;
}

