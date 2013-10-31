#include "CSejf.h"

//Konstruktor
CSejf::CSejf(void)
:
	m_topSecret(123),
	box_vehicle()
{
}

//Destruktor
CSejf::~CSejf(void)
{
}

//Metoda zwraca flagê, czy mamy dostêp do schowka
bool CSejf::TryOpen(int kod)
{
	if(m_topSecret == kod)
		return true;
	return false;
}

//Metoda dodaje obiekty klasy CVehicle do kontenera
void CSejf::AddVehicle(CVehicle pojazd, int kod)
{
	//jeœli dobry kod, dodaj pojazd do kontenera
	if(TryOpen(kod))
		box_vehicle.push_back(pojazd);
}

//Metoda zwraca iloœæ elementów w pojemniku
const int CSejf::GetSize() const
{
	return box_vehicle.size();
}

//Metoda uruchamia wszytskie samochody
void CSejf::RunAllVehicle()
{
	for (it = box_vehicle.begin(); it != box_vehicle.end(); ++it)
	{
		it->ruszaj();
	}
}

