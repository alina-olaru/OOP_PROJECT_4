#pragma once
#include "candidati.h"
#include <iostream>
using namespace std;
class candidati_prima :public candidati
{
	//pt id
	float nota_mate_bac;
public:
	candidati_prima();
	candidati_prima(float nota_mate_bac)
		: nota_mate_bac(nota_mate_bac)
	{
	}


	float get_nota_mate_bac() const;
	void set_nota_mate_bac(float nota_mate_bac);
	void citire() override;
	void afis() override;
};

