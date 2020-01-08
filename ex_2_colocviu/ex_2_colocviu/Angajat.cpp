#include "Angajat.h"
#include <iostream>
using namespace std;

Angajat::Angajat()
{
	
		this->nume = "Alina";
		this->ani_vechime = 10;
		this->salariu = 1500000;
		this->bonus = 600;
		this->suma_incasata_comenzi = 10000;
		this->nr_comenzi = 100;
	
}

int Angajat::get_nr_comenzi() const
{
	return nr_comenzi;
}

void Angajat::set_nr_comenzi(int nr_comenzi)
{
	this->nr_comenzi = nr_comenzi;
}

float Angajat::get_suma_incasata_comenzi() const
{
	return suma_incasata_comenzi;
}

void Angajat::set_suma_incasata_comenzi(float suma_incasata_comenzi)
{
	this->suma_incasata_comenzi = suma_incasata_comenzi;
}

std::string Angajat::get_nume() const
{
	return nume;
}

void Angajat::set_nume(std::string nume)
{
	this->nume = nume;
}

int Angajat::get_ani_vechime() const
{
	return ani_vechime;
}

void Angajat::set_ani_vechime(int ani_vechime)
{
	this->ani_vechime = ani_vechime;
}

float Angajat::get_salariu() const
{
	return salariu;
}

void Angajat::set_salariu(float salariu)
{
	this->salariu = salariu;
}

float Angajat::get_bonus() const
{
	return bonus;
}

void Angajat::set_bonus(float bonus)
{
	this->bonus = bonus;
}

/*	std::string nume;
	int ani_vechime;
	float salariu;
	float bonus;
	int nr_comenzi;
	float suma_incasata_comenzi;*/


void Angajat::citire()
{
	std::cout << "\nNume: ";
	std::cin >> this->nume;
	cout << "\nAni vechime ";
	cin >> this->ani_vechime;
	cout << "\nSalariu: ";
	cin >> this->salariu;
	cout << "\nbonus ";
	cin >> this->bonus;
	cout << "\nNr comenzi ";
	cin >> this->nr_comenzi;
	
}

void Angajat::afis()
{
	std::cout << "\nNume: ";
	std::cout << this->nume;
	cout<< "\nAni vechime ";
	cout << this->ani_vechime;
	cout << "\nSalariu: ";
	cout << this->salariu;
	cout << "\nbonus ";
	cout << this->bonus;
	cout << "\nNr comenzi ";
	cout << this->nr_comenzi;
}
