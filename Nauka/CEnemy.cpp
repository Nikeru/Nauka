#include "CEnemy.h"

//Kontruktor
CEnemy::CEnemy(void)
:
	m_str_phy(0)
	
{
}

//Destruktor wirtualny
CEnemy::~CEnemy(void)
{
	m_str_phy = 0;
}

//Metoda zwraca poziom si³y wroga
int CEnemy::getStrPhy()
{
	return m_str_phy;
}

//Metoda ustawia poziom si³y wroga
void CEnemy::setStrPhy(int str)
{
	m_str_phy = str;
}