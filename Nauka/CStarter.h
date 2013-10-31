#ifndef H_STARTER
#define H_STARTER

///
///Klasa reprezentuje starter/stacyjka/rozrusznik
///
class CStarter
{
public:

	///
	///Konstruktor
	///
	CStarter(void);

	///
	///Destruktor
	///
	~CStarter(void);

	///
	///Metoda uruchamia starter
	///
	void Start();

	///
	///Metoda zatrzymuje starter
	///
	void Stop();

private:
	bool m_switch; //pole on/off
};

#endif //H_STARTER
