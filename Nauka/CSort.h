#ifndef H_SORT
#define H_SORT

///
///Klasa statyczna zawiera metody sortuj�ce
///
class CSort
{
public:

	///
	///Konstruktor
	///
	CSort(void);
	
	///
	///Destruktor
	///
	~CSort(void);

	///
	///Metoda statyczna - sortowanie b�belkowe
	///
	///@param tab[] - tablica
	///
	///@param size - rozmiar tablicy
	///
	static void BubleSort(int tab[], int size);

	//Zadanie domowe: na nast�pn� lekcj�
	//dopisa� przynajmniej jedn� metod�
	//sortowania...

	///
	///Metoda statyczna - sortowanie szybkie
	///
	///@param tab[] - tablica
	///
	///@param first - pierwszy element tablicy
	///
	///@param last - ostatni element tablicy
	///
	static void QuickSort(int tab[], int first, int last);
};

#endif //H_SORT
