#include "Restaurant.h"

int Restaurant::get_nr_beneficiari_bonus() const
{
	return nr_beneficiari_bonus;
}

void Restaurant::set_nr_beneficiari_bonus(int nr_beneficiari_bonus)
{
	this->nr_beneficiari_bonus = nr_beneficiari_bonus;
}

int Restaurant::get_nr_angajati() const
{
	return nr_angajati;
}

void Restaurant::set_nr_angajati(int nr_angajati)
{
	this->nr_angajati = nr_angajati;
}

std::map<Angajat, vector<Comanda>> Restaurant::get_ang() const
{
	return ang;
}

void Restaurant::set_ang(std::map<Angajat, vector<Comanda>> pairs)
{
	ang = pairs;
}


void Restaurant::citire()
{

	//angajatul-1 instanta
	cout << endl << endl << endl;
	cout << "Datele angajatului\n";
	Angajat ang;
	ang.citire();

	//vectorul de comenzi asociat
	vector<Comanda> comenzi_ang;
	for(int i=0;i<ang.get_nr_comenzi();i++)
	{

		Comanda c1;
		int numar_portii;
		
		cout << "\nNr itemuri comandate initial in aceasta comanda? ";
		cin >> numar_portii;
		c1.set_nr_portii(numar_portii);
		//am numar_portii de portii cu diferite mancaruri si cantitati
		for (int i = 0; i < numar_portii; i++)
		{
			Produs_comandat prod;


			string den;
			float pret;
			cout << "\nIntrodu denumirea ";
			cin >> den;
			cout << "\nIntrodu pretul pentru " << den << " ";
			cin >> pret;
			cout << "\nNr portii ";
			int nr_p;
			cin >> nr_p;

			prod.set_denumire(den);
			prod.set_pret_portie(pret);
			prod.set_nr_portii_comandate_per_produs(nr_p);


			c1.get_produs_comandat().push_back(prod);
			
		}


		comenzi_ang.push_back(c1);
		
	}


	this->ang.insert(make_pair(ang, comenzi_ang));
}


void Restaurant::afis()
{
	for(auto i=this->ang.begin();i!=ang.end();i++)
//	for(auto i:this->ang)
	{
		//i->first->afis();
		//cout << i.first.get_nr_comenzi() << "Nr comenzi\n";
		cout<<i->first.get_nr_comenzi() << "Nr comenzi\n";
		cout << i->first.get_nume() << "Nume\n";
		
	}
	
}

