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

bool operator<(const Angajat& lhs, const Angajat& rhs)
{
	if (lhs.nume < rhs.nume)
		return true;
	if (rhs.nume < lhs.nume)
		return false;
	if (lhs.ani_vechime < rhs.ani_vechime)
		return true;
	if (rhs.ani_vechime < lhs.ani_vechime)
		return false;
	if (lhs.salariu < rhs.salariu)
		return true;
	if (rhs.salariu < lhs.salariu)
		return false;
	if (lhs.bonus < rhs.bonus)
		return true;
	if (rhs.bonus < lhs.bonus)
		return false; 
	if (lhs.nr_comenzi < rhs.nr_comenzi)
		return true;
	if (rhs.nr_comenzi < lhs.nr_comenzi)
		return false;
	return lhs.suma_incasata_comenzi < rhs.suma_incasata_comenzi;
}
//
//bool operator<=(const Angajat& lhs, const Angajat& rhs)
//{
//	return !(rhs < lhs);
//}
//
//bool operator>(const Angajat& lhs, const Angajat& rhs)
//{
//	return rhs < lhs;
//}
//
//bool operator>=(const Angajat& lhs, const Angajat& rhs)
//{
//	return !(lhs < rhs);
//}

std::ostream& operator<<(std::ostream& out, Angajat& ang)
{
	out << "\nNume: ";
	out << ang.get_nume();
	out << "\nAni vechime ";
	out << ang.get_ani_vechime();
	out << "\nSalariu: ";
	out << ang.get_salariu();
	out << "\nbonus ";
	out << ang.get_bonus();
	out << "\nNr comenzi ";
	out << ang.get_nr_comenzi();
	return out;
}
