#ifndef H_BOSS
#define H_BOSS

#include "CEnemy.h"

///
///Klasa bossa
///dziedziczy po klasie CEnemy
///
class CBoss : public CEnemy
{
public:

	///
	///Kontruktor
	///
	CBoss(void);
	
	///
	///Desturktor
	///
	~CBoss(void);

	///
	///Metoda zwraca si�e bossa
	///
	int getBossStr();

	///
	///Metoda zwi�ksza si�e wroga dwukrotnie
	///
	///@param str - si�a
	///
	void setBossStr(int str);
};

#endif //H_BOSS

