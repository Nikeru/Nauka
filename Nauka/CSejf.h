#ifndef H_SEJF
#define H_SEJF

#include "CVehicle.h"
#include <vector>

//STL - biblioteka szablonów klas
//pojemnikowych/kontenerowych
//S tandard
//T emplate
//L ibrary

///
///Klasa reprezentuje sejf (pojemnik/kontener)
///
class CSejf
{
public:

	///
	///Konstruktor
	///
	CSejf(void);
	
	///
	///Destruktor
	///
	~CSejf(void);

	///
	///Metoda zwraca flagê, czy mamy dostêp do schowka
	///
	///@param kod - kod dostêpu
	///
	bool TryOpen(int kod);

	///
	///Metoda dodaje obiekty klasy CVehicle do kontenera
	///
	///@param pojazd - obiekty klasy CVehicle
	///
	///@param kod - kod dostêpu
	///
	void AddVehicle(CVehicle pojazd, int kod);

	///
	///Metoda zwraca iloœæ elementów w pojemniku
	///
	const int GetSize() const;
	
	///
	///Metoda uruchamia wszytskie samochody
	///
	void RunAllVehicle();

private:

	int m_topSecret; //kod dostêpu
	//pojemnik na obiekty klasy CVehicle (KOPIE!!!)
	std::vector<CVehicle> box_vehicle;
	std::vector<CVehicle>::iterator it;//
};

#endif //H_SEJF
