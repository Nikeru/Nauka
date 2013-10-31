#ifndef H_ENEMY
#define H_ENEMY

///
///Klasa reprezentuj¹ca wroga
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
	///Metoda zwraca poziom si³y fizycznej wroga
	///
	int getStrPhy();

	///
	///Metoda ustawia poziom si³y fizycznej wroga
	///
	///@param str - si³a 
	///
	void setStrPhy(int str);

protected:
	
	int m_str_phy; //si³a fizyczna wroga

};

#endif //H_ENEMY

