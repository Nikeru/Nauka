#include "CBoss.h"

//Kontruktor
CBoss::CBoss(void)
{
}

//Destruktor
CBoss::~CBoss(void)
{
}

//Metoda zwraca si³e bossa
int CBoss::getBossStr()
{
	return m_str_phy;
}

//Metoda zwiêksza si³e wroga dwukrotnie
void CBoss::setBossStr(int str)
{
	m_str_phy =  str * 2;
}