#include "candidati_prima.h"

candidati_prima::candidati_prima()
{
}

float candidati_prima::get_nota_mate_bac() const
{
	return nota_mate_bac;
}

void candidati_prima::set_nota_mate_bac(float nota_mate_bac)
{
	this->nota_mate_bac = nota_mate_bac;
}

void candidati_prima::citire()
{
	candidati::citire();
}

void candidati_prima::afis()
{
	this->nota_mate_bac = 10;
}
