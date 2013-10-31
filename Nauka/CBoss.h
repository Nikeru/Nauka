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
	///Metoda zwraca si³e bossa
	///
	int getBossStr();

	///
	///Metoda zwiêksza si³e wroga dwukrotnie
	///
	///@param str - si³a
	///
	void setBossStr(int str);
};

#endif //H_BOSS

