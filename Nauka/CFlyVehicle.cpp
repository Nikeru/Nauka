#include "CFlyVehicle.h"

//Konstruktor
CFlyVehicle::CFlyVehicle(void)
{
}

//Destruktor
CFlyVehicle::~CFlyVehicle(void)
{
}

//Metoda zwraca kod dost�pu
int CFlyVehicle::getSecretCode()
{
	return kod_do_sejfu;
}

//Metoda ustawia kod dost�pu
void CFlyVehicle::setSecretCode(int kod)
{
	kod_do_sejfu = kod;
}
