#include "candidati.h"
#include <iostream>
using namespace std;

std::string candidati::get_nume() const
{
	return nume;
}

void candidati::set_nume(std::string nume)
{
	this->nume = nume;
}

float candidati::get_medie_bacalaureat() const
{
	return medie_bacalaureat;
}

void candidati::set_medie_bacalaureat(float medie_bacalaureat)
{
	this->medie_bacalaureat = medie_bacalaureat;
}

int candidati::get_nr_inregistrare() const
{
	return nr_inregistrare;
}

void candidati::set_nr_inregistrare(int nr_inregistrare)
{
	this->nr_inregistrare = nr_inregistrare;
}

std::string candidati::get_nr_dosar() const
{
	return nr_dosar;
}

void candidati::set_nr_dosar(std::string nr_dosar)
{
	this->nr_dosar = nr_dosar;
}


candidati::candidati()
{
	this->nume = " ";
	this->medie_bacalaureat = 10;
	this->nr_fac = 0;
	this->nr_inregistrare = this->nr_inregistrare + 1;
	this->nr_dosar = 'I';
}

void candidati::citire()
{



	cout << "\nNume: ";
	cin >> this->nume;
	cout << "Prima facultate(0) a-2a (1) ";



	while (1) {
		try {
			cin >> this->nr_fac;

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

	

	cout << "\nMedia bac: ";



	while (1) {
		try {
			cin >> this->medie_bacalaureat;

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


}

/*
 * 	std::string nume;
	//0 prima,1 a 2a 
	//int nr_fac;
	float medie_bacalaureat;
	int nr_inregistrare;
	std::string nr_dosar;
 */
void candidati::afis()
{
	cout << "\nNume: ";
	cout<< this->nume;
	cout << "Prima facultate(0) a-2a (1) ";
	cout << this->nr_fac;
	cout << "\nMedia bac: ";
	cout << this->medie_bacalaureat;
	cout << "Nr inregistrare" << this->nr_inregistrare;
	cout << "Nr dosar: " << this->nr_dosar;
	
}

int candidati::get_nr_fac() const
{
	return nr_fac;
}

void candidati::set_nr_fac(int nr_fac)
{
	this->nr_fac = nr_fac;
}


ostream& operator<<(std::ostream& out, const  candidati& c)
{

	out << "\nNume: ";
	out << c.nume;
	out << "Prima facultate(0) a-2a (1) ";
	out << c.nr_fac;
	out << "\nMedia bac: ";
	out << c.medie_bacalaureat;
	out << "Nr inregistrare" << c.nr_inregistrare;
	out << "Nr dosar: " << c.nr_dosar;
	return out;


	
}

istream& operator>>(std::istream& in,  candidati& c)
{


	cout << "\nNume: ";
	in >> c.nume;
	cout << "Prima facultate(0) a-2a (1) ";



	while (1) {
		try {
			in >> c.nr_fac;

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



	cout << "\nMedia bac: ";



	while (1) {
		try {
			in >> c.medie_bacalaureat;

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

	
}