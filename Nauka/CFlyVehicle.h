#ifndef H_FLY_VEHICLE
#define H_FLY_VEHICLE

#include "CVehicle.h"

///
///Klasa lataj¹cego pojazdu
///dziedziczy po klasie CVehicle
///
class CFlyVehicle :	public CVehicle
{
public:

	///
	///Konstruktor
	///
	CFlyVehicle(void);
	
	///
	///Destruktor
	///
	~CFlyVehicle(void);

	///
	///Metoda zwraca kod dostêpu
	///
	int getSecretCode();

	///
	///Metoda ustawia kod dostêpu
	///
	///@param kod - kod dostêpu
	///
	void setSecretCode(int kod);
};

#endif //H_FLY_VEHICLE