#ifndef H_PRALKA
#define H_PRALKA
class CPralka			///Clasa ma metode nie funkcje
{
public:
	CPralka(void);		///Metoda bez typu to konstruktor
	CPralka(float cap);
	~CPralka(void);		///Destruktor
private:
	float m_capacity;
};

#endif //H_PRALKA