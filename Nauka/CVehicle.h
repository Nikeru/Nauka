#ifndef H_VEHICLE
#define H_VEHICLE

#include "CStarter.h"

///
///Klasa reprezentuje obiekt poruszaj�cy si�
///
class CVehicle
{
public:

	///
	///Konstruktor
	///
	CVehicle(void);

	///
	///Destruktor wirtualny
	///
	virtual ~CVehicle(void);

	///
	///Metoda zwraca pr�dko�� obiektu
	///
	float getSpeed();

	///
	///Metoda ustawia pr�dko�� obiektu
	///
	///@param speed - pr�dko��
	///
	void setSpeed(float speed);

	///
	///Metoda uruchmia pojazd
	///
	void ruszaj();

	///
	///Metoda zatrzmuje pojazd
	///
	void zatrzymaj();

private:

	float		m_speed;	//pr�dko�� obiektu
	CStarter	m_wlacznik;	//stacyjka


protected:

	int kod_do_sejfu;
};

#endif //H_VEHICLE