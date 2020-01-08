#pragma once
#include <string>

class Angajat
{
private:
	std::string nume;
	int ani_vechime;
	float salariu;
	float bonus;
	int nr_comenzi;
	float suma_incasata_comenzi;
public:

	Angajat(std::string nume, int ani_vechime, float salariu, float bonus, int nr_comenzi, float suma_incasata_comenzi)
		: nume(nume),
		  ani_vechime(ani_vechime),
		  salariu(salariu),
		  bonus(bonus),
		  nr_comenzi(nr_comenzi),
		  suma_incasata_comenzi(suma_incasata_comenzi)
	{
	}
	Angajat();
	int get_nr_comenzi() const;
	void set_nr_comenzi(int nr_comenzi);
	float get_suma_incasata_comenzi() const;
	void set_suma_incasata_comenzi(float suma_incasata_comenzi);
	std::string get_nume() const;
	void set_nume(std::string nume);
	int get_ani_vechime() const;
	void set_ani_vechime(int ani_vechime);
	float get_salariu() const;
	void set_salariu(float salariu);
	float get_bonus() const;
	void set_bonus(float bonus);
	void citire();
	void afis();
};

