#include "CStarter.h"

//Konstruktor
CStarter::CStarter(void)
:
	m_switch(false)
{
}

//Destruktor
CStarter::~CStarter(void)
{
	m_switch = false;
}

//Metoda uruchamia starter
void CStarter::Start()
{
	m_switch = true;
}

//Metoda zatrzymuje starter
void CStarter::Stop()
{
	m_switch = false;
}

