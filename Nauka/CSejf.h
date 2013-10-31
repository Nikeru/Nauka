#ifndef H_SEJF
#define H_SEJF

#include "CVehicle.h"
#include <vector>

//STL - biblioteka szablon�w klas
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
	///Metoda zwraca flag�, czy mamy dost�p do schowka
	///
	///@param kod - kod dost�pu
	///
	bool TryOpen(int kod);

	///
	///Metoda dodaje obiekty klasy CVehicle do kontenera
	///
	///@param pojazd - obiekty klasy CVehicle
	///
	///@param kod - kod dost�pu
	///
	void AddVehicle(CVehicle pojazd, int kod);

	///
	///Metoda zwraca ilo�� element�w w pojemniku
	///
	const int GetSize() const;
	
	///
	///Metoda uruchamia wszytskie samochody
	///
	void RunAllVehicle();

private:

	int m_topSecret; //kod dost�pu
	//pojemnik na obiekty klasy CVehicle (KOPIE!!!)
	std::vector<CVehicle> box_vehicle;
	std::vector<CVehicle>::iterator it;//
};

#endif //H_SEJF
