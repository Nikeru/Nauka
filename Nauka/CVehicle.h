#ifndef H_VEHICLE
#define H_VEHICLE

#include "CStarter.h"

///
///Klasa reprezentuje obiekt poruszaj¹cy siê
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
	///Metoda zwraca prêdkoœæ obiektu
	///
	float getSpeed();

	///
	///Metoda ustawia prêdkoœæ obiektu
	///
	///@param speed - prêdkoœæ
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

	float		m_speed;	//prêdkoœæ obiektu
	CStarter	m_wlacznik;	//stacyjka


protected:

	int kod_do_sejfu;
};

#endif //H_VEHICLE