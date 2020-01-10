// PROJECT_6.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Facultate.h"
#include "candidati_prima.h"
#include "d_id.h"
#include "d_if.h"
#include "candidati_a_doua.h"
using namespace std;

void meniu()
{
	cout << "1)Adaugare un nou candidat cu toate datele lui: ";
	cout << "2)Afisare date: ";
	cout << "3)afisare admisi";
}
int main()
{
	cout << "Sa se introduca datele facultatii";
	Facultate f;
	f.citire();
	f.afisare();


	meniu();
	int ch;
	cin >> ch;
	while(1)
	{
		cin >> ch;
		switch (ch)
		{


		case 1:
			{
			cout << "Candidatul a absolvit deja o facultate?(0 pt prima facultate , 1 pt a 2a facultate)";
			int id;

			while (1) {
				try {
					cin >> id;

					if (cin.fail())
						//dupa ce cin-ul da fail,trebuie neaparat dat clear
					{
						cin.clear();
						cin.ignore(numeric_limits<streamsize>::max(), '\n');
						//dau throw erorii aparute
						throw invalid_argument("Valoarea introduse nu este un numar INTREG.\n");
					}
					break;
				}
				catch (std::invalid_argument & arg)
				{
					cout << arg.what();

				}
				catch (...)
				{
					cout << "A intervenit o problema in sistem." << endl;
				}
			}

				
		
			switch (id)
			{

			case 0:
				{
				candidati_prima c;
				c.citire();
				cout << "ID(0) SAU IF(1)?";
				int ch2;
				cin >> ch2;
					switch(ch2)
					{
					case 0:
						{
						d_id d;
						d.citire();
						break;
						}
					case 1:
						{
							d_if d;
							d.afisare();
							break;
						}
					}
				
				break;
				}
			case 1:
				{
				candidati_a_doua c;
				c.citire();
				cout << "ID(0) SAU IF(1)?";
				int ch2;
				cin >> ch2;
				switch (ch2)
				{
				case 0:
				{
					d_id d;
					d.citire();
					break;
				}
				case 1:
				{
					d_if d;
					d.afisare();
					break;
				}
				}

				break;
			}
			}



			cout << "La ce domeniu: ";
			string den;
			cin >> den;
			int indice = 0;
				for(auto i:f.get_dom())
				{
					if(i.get_nume_domeniu()==den)
					{
						//f.get_dom().candidati.push_back(c);
					}
				}
			break;
				
			}

			case 2:
			{
				f.afisare();
				break;
			}
			case 3:
			{
				f.afisare_admisi();
				break;
			}

			
			
		}
		
	}
}

