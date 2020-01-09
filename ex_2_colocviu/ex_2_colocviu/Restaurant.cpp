#include "Restaurant.h"


Restaurant::Restaurant()

{
	
	this->nr_angajati = 0;
	this->nr_beneficiari_bonus = 0;
}

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

map<Angajat, vector<Comanda>> Restaurant::get_ang() const
{
	return ang;
}

void Restaurant::set_ang(map<Angajat, vector<Comanda>> pairs)
{
	ang = pairs;
}


void Restaurant::citire()
{
	cout << "\nNr Ang:\n";
	cin >> this->nr_angajati;
	cout << "\nNr care primesc bonus?\n";
	std::cin >> this->nr_beneficiari_bonus;


	for (int z = 0; z < this->nr_angajati; z++)
	{
		//angajatul-1 instanta
		cout << endl << endl << endl;
		cout << "Datele angajatului\n";
		Angajat ang;
		ang.citire();

		//vectorul de comenzi asociat
		vector<Comanda> comenzi_ang;
		for (int i = 0; i < ang.get_nr_comenzi(); i++)
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


		pair<Angajat, vector<Comanda>> pereche = make_pair(ang, comenzi_ang);

		this->ang.insert(pereche);

		//this->ang.insert(make_pair(ang, comenzi_ang));
	}

}


void Restaurant::afis()
{
	for(auto i=this->ang.begin();i!=ang.end();i++)

	{
		//cout << i->first;
		
		
	}
	
}

void Restaurant::get_beneficiari()
{
	int index;
	int nr_max = 0;
	int suma_max = 0;
	vector<int> sume_totale;
	
	for (auto i = this->ang.begin(); i != ang.end(); i++)
	{
		int suma_pers = 0;
		index = 1;
		int iterator = 1;
		if(i->first.get_nr_comenzi()>index)
		{
			index = iterator;
			nr_max = i->first.get_nr_comenzi();
			
		}

		//for(vector<Comanda> x : i->second)
		
			//afisare
		
			//suma_pers=suma_pers+*((i->second).at(i))
		
		




		
		iterator;
	}


	cout << "\nNr maxim de comenzi " << nr_max << " al ang " << index;
}


