#include "CBoss.h"

//Kontruktor
CBoss::CBoss(void)
{
}

//Destruktor
CBoss::~CBoss(void)
{
}

//Metoda zwraca si�e bossa
int CBoss::getBossStr()
{
	return m_str_phy;
}

//Metoda zwi�ksza si�e wroga dwukrotnie
void CBoss::setBossStr(int str)
{
	m_str_phy =  str * 2;
}