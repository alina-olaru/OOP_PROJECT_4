#pragma once
#include <string>

class candidati
{
private:
	std::string nume;
	//0 prima,1 a 2a 
	int nr_fac;
	float medie_bacalaureat;
	int nr_inregistrare=0;
	std::string nr_dosar;
	
public:

	candidati(std::string nume, int nr_fac, float medie_bacalaureat, int nr_inregistrare, std::string nr_dosar)
		: nume(nume),
		  nr_fac(nr_fac),
		  medie_bacalaureat(medie_bacalaureat),
		  nr_inregistrare(nr_inregistrare),
		  nr_dosar(nr_dosar)
	{
	}

	std::string get_nume() const;
	void set_nume(std::string nume);
	float get_medie_bacalaureat() const;
	void set_medie_bacalaureat(float medie_bacalaureat);
	int get_nr_inregistrare() const;
	void set_nr_inregistrare(int nr_inregistrare);
	std::string get_nr_dosar() const;
	void set_nr_dosar(std::string nr_dosar);

	candidati(std::string nume, float medie_bacalaureat, int nr_inregistrare, std::string nr_dosar)
		: nume(nume),
		  medie_bacalaureat(medie_bacalaureat),
		  nr_inregistrare(nr_inregistrare),
		  nr_dosar(nr_dosar)
	{
	}
	candidati();
	virtual void citire();
	virtual void afis();

	int get_nr_fac() const;
	void set_nr_fac(int nr_fac);
	friend std::ostream& operator<<(std::ostream& out, const  candidati& c);
	friend std::istream& operator>>(std::istream& in,  candidati& c);
	

};

