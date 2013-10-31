#ifndef H_FLY_VEHICLE
#define H_FLY_VEHICLE

#include "CVehicle.h"

///
///Klasa lataj�cego pojazdu
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
	///Metoda zwraca kod dost�pu
	///
	int getSecretCode();

	///
	///Metoda ustawia kod dost�pu
	///
	///@param kod - kod dost�pu
	///
	void setSecretCode(int kod);
};

#endif //H_FLY_VEHICLE