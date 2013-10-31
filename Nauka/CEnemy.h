#ifndef H_ENEMY
#define H_ENEMY

///
///Klasa reprezentuj�ca wroga
///
class CEnemy
{
public:
	
	///
	///Kontruktor
	///
	CEnemy(void);
	
	///
	///Destruktor
	///
	~CEnemy(void);

	///
	///Metoda zwraca poziom si�y fizycznej wroga
	///
	int getStrPhy();

	///
	///Metoda ustawia poziom si�y fizycznej wroga
	///
	///@param str - si�a 
	///
	void setStrPhy(int str);

protected:
	
	int m_str_phy; //si�a fizyczna wroga

};

#endif //H_ENEMY

