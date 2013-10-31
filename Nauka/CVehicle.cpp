#include "CVehicle.h"

//Konstruktor
CVehicle::CVehicle(void)
:
	m_speed(0.0f),
	m_wlacznik(),
	kod_do_sejfu(0)
{
}

//Destruktor wirtualny
CVehicle::~CVehicle(void)
{
	m_speed = 0.f;
}

//Metoda zwraca prêdkoœæ obiektu
float CVehicle::getSpeed()
{
	return m_speed;
}

//Metoda ustawia prêdkoœæ obiektu
void CVehicle::setSpeed(float speed)
{
	//sprawdzamy czy jest sens...
	if(speed < 0) return;
	m_speed = speed;
}

//Metoda uruchmia pojazd
void CVehicle::ruszaj()
{
	m_wlacznik.Start();
}

//Metoda uruchmia pojazd
void CVehicle::zatrzymaj()
{
	m_wlacznik.Stop();
}
