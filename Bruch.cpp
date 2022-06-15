#include "Bruch.h"

Bruch::Bruch()
{
	this->iNenner = 0;
	this->iZaehler = 0;
}

Bruch::Bruch(int iZaehlerValue, int iNennerValue)
{
	this->iNenner = iNennerValue;
	this->iZaehler = iZaehlerValue;
}

Bruch::~Bruch()
{

}

int Bruch::getZaehler()
{
	return this->iZaehler;
}

void Bruch::setZaehler(int iValue)
{
	this->iZaehler = iValue;
}

int Bruch::getNenner()
{
	return this->iNenner;
}

void Bruch::setNenner(int iValue)
{
	this->iNenner = iValue;
}

Bruch Bruch::Addition(Bruch &bruch1, Bruch &bruch2)
{
	Bruch result;

	result.iZaehler = (bruch1.iZaehler * bruch2.iNenner) + (bruch2.iZaehler * bruch1.iNenner);
	result.iNenner = bruch1.iNenner * bruch2.iNenner;

	return result;
}

Bruch Bruch::Subtrahieren(Bruch bruch1, Bruch bruch2)
{
	Bruch result;

	result.iZaehler = (bruch1.iZaehler * bruch2.iNenner) - (bruch2.iZaehler * bruch1.iNenner);
	result.iNenner = bruch1.iNenner * bruch2.iNenner;

	return result;
}

void Bruch::kuerzen()
{
	// PQ-Formel um den ggT zu finden
	int q = this->iZaehler;
	int p = this->iNenner;
	int r = 0;

	while (q != 0)
	{
		r = p % q;
		p = q;
		q = r;
	}
	// p = ggT

	this->iZaehler /= p;
	this->iNenner /= p;
}

Bruch Bruch::Multiplication(Bruch bruch1, Bruch bruch2)
{
	Bruch result;

	result.iZaehler = bruch1.iZaehler * bruch2.iZaehler;
	result.iNenner = bruch1.iNenner * bruch2.iNenner;

	return result;
}


Bruch Bruch::Divide(Bruch bruch1, Bruch bruch2)
{
	Bruch DivideBruch(bruch2.iNenner, bruch2.iZaehler);
    
	return this->Multiplication(bruch1,DivideBruch);
}

