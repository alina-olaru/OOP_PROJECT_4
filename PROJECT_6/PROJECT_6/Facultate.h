#pragma once
#include "domeniu.h"
#include <iostream>
using namespace std;

 class Facultate
{

 	
private:
	//static Facultate  = new Facultate();
	int nr_if;
	int nr_id;
	float procent_taxa_a2a;
	vector<domeniu> dom;
public:
 /*	static Facultate getInstanta()
 	{
		return *this;
 	}*/
	Facultate();

	Facultate(int nr_if, int nr_id, float procent_taxa_a2_a)
		: nr_if(nr_if),
		  nr_id(nr_id),
		  procent_taxa_a2a(procent_taxa_a2_a)
	{
	}


	int get_nr_if() const;
	void set_nr_if(int nr_if);
	int get_nr_id() const;
	void set_nr_id(int nr_id);
	float get_procent_taxa_a2_a() const;
	void set_procent_taxa_a2_a(float procent_taxa_a2_a);
	void citire();
	void afisare();

	vector<domeniu> get_dom() const;
	void set_dom(vector<domeniu> domenius);
	int nota_admitere();
	void afisare_admisi();
 	
};

