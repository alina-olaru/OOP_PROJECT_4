#include "Facultate.h"
#include "typeinfo"
#include "d_id.h"
#include "d_if.h"

Facultate::Facultate()
{
	this->nr_id = 100;
	this->nr_if = 100;
	this->procent_taxa_a2a = 5;
}

int Facultate::get_nr_if() const
{
	return nr_if;
}

void Facultate::set_nr_if(int nr_if)
{
	this->nr_if = nr_if;
}

int Facultate::get_nr_id() const
{
	return nr_id;
}

void Facultate::set_nr_id(int nr_id)
{
	this->nr_id = nr_id;
}

float Facultate::get_procent_taxa_a2_a() const
{
	return procent_taxa_a2a;
}

void Facultate::set_procent_taxa_a2_a(float procent_taxa_a2_a)
{
	procent_taxa_a2a = procent_taxa_a2_a;
}

void Facultate::citire()
{
	cout << "Nr studenti id: ";





	while (1) {
		try {
			cin >> this->nr_id;

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


	

	cout << "Nr studenti if ";



	while (1) {
		try {
			cin >> this->nr_if;

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


	


	for(auto i:this->dom)
	{
		//cout << "0-if,1-id";
		/*int ch;
		cin >> ch;
		switch (ch)
		{
		case 1:
			{
				i
			}
		
		}*/

		//nu mai e nevoie de sw datorita f virtuale
		i.citire();
	}
}

void Facultate::afisare()
{
	cout << "Nr studenti id: ";
	cout << this->nr_id;
	cout << "Nr studenti if ";
	cout << this->nr_if;
	for (auto i : this->dom)
	{
		i.afisare();
	}
}

vector<domeniu> Facultate::get_dom() const
{
	return dom;
}

void Facultate::set_dom(vector<domeniu> domenius)
{
	dom = domenius;
}

int Facultate::nota_admitere()
{
	vector<candidati> a;
	int medief=0;
	for(auto i:this->get_dom())
	{
		 a=i.get_cand();
		 if (typeid(a) == typeid(d_id))
		 {
			 cout << "Citeste nota la proba orala ";
			 float n1;
			 cin >> n1;
			//medief=medief+(n1+a.get_nota_bac)/2;
			 
		 }
		 if (typeid(a) == typeid(d_if))
		 {
			 cout << "Citeste nota la primul subiect: ";
			 float n1;
			 cin >> n1;
			 cout << "\nAl doilea subiect: ";
			 float n2;
			 cin >> n2;
			 float medie = (n1 + n2) / 2;
			 medief = 0.8 * medie + medief;
			 //medief=medief+-0.2*a.get_nota_bac

		 }
	
		

	}
	return medief;

}

void Facultate::afisare_admisi()
{
	for(auto y:this->get_dom())
	{
		float nota = nota_admitere();
		if(nota>5)
		{
			y.afisare();
		}
		
	}
}
