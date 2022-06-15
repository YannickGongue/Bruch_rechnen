#ifndef BRUCH_H
#define BRUCH_H

#pragma once

class Bruch
{
  public:
	 Bruch();
	 Bruch(int iZaelerValue, int iNennerValue);
	~ Bruch();
	int getZaehler();
	void setZaehler(int izaehlerValue);
	int getNenner();
	void setNenner(int iNennerValue);
	Bruch Addition(Bruch &bruch1, Bruch &bruch2);
	Bruch Multiplication(Bruch bruch1, Bruch bruch2);
	Bruch Divide(Bruch bruch1, Bruch bruch2);
	Bruch Subtrahieren(Bruch bruch1, Bruch bruch2);
	void kuerzen();

  private:
	int iZaehler;
	int iNenner;

};
#endif BRUCH_H

