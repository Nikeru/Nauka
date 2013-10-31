#include "CSort.h"

//Konstruktor
CSort::CSort(void)
{
}

//Destruktor
CSort::~CSort(void)
{
}

//Metoda statyczna - sortowanie b�belkowe
void CSort::BubleSort(int tab[], int size)
{
	//tutaj nast�puje sortowanie
	//tutaj sortujemy b�belkowo...
	int i;		//zmienna pomocznicza
	int j;		//zmienna pomocznicza
	int tmp;	//zmienna pomocznicza

	//sortujemy - metoda sortowania b�belkowego
	
	for(i=0; i< size; i++)	//ilo�� przej�� - wymuszamy
							//tyle przej��, aby posortowa�
							//ca�� tablic�
		for (j=0; j<size; j++)//przej�cie
		{
			if(tab[j] > tab[j+1])//sprawdzamy par�
			{
				//zamiana dw�ch element�w tablicy
				tmp = tab[j+1];
				tab[j+1] = tab [j];
				tab[j] = tmp;
			}
		}
}

void CSort::QuickSort(int tab[], int first, int last) 
{
	//tutaj nast�puje sortowanie
	//tutaj sortujemy szybko
     int i=first;					//zmienna pomocznicza
     int j=last;					//zmienna pomocznicza
     int x=tab[(first+last)/2];		//zmienna pomocznicza
     
	 //sortujemy - metoda szybkiego sortowania

	 do
	 {
         while(tab[i]<x) i++;
         while(tab[j]>x) j--;
         if(i<=j)
		 {                  
             int tmp=tab[i];
             tab[i]=tab[j];
             tab[j]=tmp;
             i++;
             j--;
         }
     }
	 
	 while(i<=j);
     if(first<j) QuickSort(tab,first,j);
     if(last>i) QuickSort(tab,i,last);     

}