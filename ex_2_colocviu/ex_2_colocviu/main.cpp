#pragma once
#include "Produs.h"
#include <iostream>
#include "Comanda.h"
#include <istream>
#include <ostream>
#include "Restaurant.h"
using namespace std;


int main() 
{
	/*Comanda* c = new Comanda();
	//cout << "Ce produs doriti sa comandati?" << endl;
	c->citire_produs_comandat();
	Comanda C1("cola", 3);
	Comanda C2("cafea", 10, 2, 10, 2019);
	*/
	
	/*
	Produs meniu_comandat[3] =
	{
		Produs("frigarui",30),
		Produs("lasagna",50),
		Produs("cafea",13)
	};
	*/
	/*Comanda C1("cafea", 33);
	C1 = C1 + 4;
	cout << "Ati comandat " << C1.get_nr_portii();
	*/

	/*cout << "Introduceti meniul de astazi .Cate feluri sunt?" << endl;
	int nr_feluri; cin >> nr_feluri;

	for (int i = 0; i < nr_feluri; i++) {
		Produs* meniu_zilnic = new Produs();
		cout << i + 1 << ") Numele felului: ";
		string a; cin >> a;
		cout<<endl << i + 1 << ") Pret: ";
		float b; cin >> b;
		//Produs(a, b);
	}

	cout << endl << "Meniul de astazi este :" << endl;
	Comanda* C1 = new Comanda();
	cout << "Ce doriti sa comandati? " << endl;
	string nume;
	char nrp;
	cin >> nume >> nrp;
	C1->set_nr_portii(nrp);
	
	*/

	/*
	prefix
	Comanda C1("cafea", 33);
	//C1 = C1 + 4;
	cout << C1;
	++C1;
	cout << C1;
	++C1;
	cout << C1;
	*/
	

	//postfix
	/*Comanda C1("cafea", 33);
	C1 = C1 + 4;
	cout << C1;
	C1++;
	cout << C1;
	C1++;
	cout << C1;*/

	/*Comanda com;
	com.citire_produs_comandat();
	com.afis();
	com.nota_plata();
	cout << endl << endl << endl << endl;
	com.adauga_acelasi_produs();
	com.afis();
	cout << endl << endl << endl << endl;
	com.sterge_produs_din_comanda();
	cout << endl << endl << endl << endl;
	com.adauga_produs_comanda();
	cout << endl << endl << endl << endl;
	com.sterge_ultima_comanda();*/

	Restaurant res;
	res.citire();
	res.afis();

}