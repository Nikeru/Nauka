#include <iostream>
#include <string>
#include <ctime>
#include <fstream>
#include <list>
#include <SFML/Graphics.hpp>

#include "CPralka.h"
#include "CVehicle.h"
#include "CSejf.h"
#include "CFlyVehicle.h"
#include "CEnemy.h"
#include "CBoss.h"
#include "CSort.h"
#include "MyTemplate.h"
#include "TSchowek.h"


using namespace std;

int main ()
{
	///Kontruktor wykonuje siê przy powo³aniu
	CPralka frania;	
	///int w=sizeof(frania);
	CPralka hania(24.0f);
	///hania.m_capacity=15.0f-Ÿle m_capacity prywatne
	
	//test klasy
	CVehicle budgy;

//2013-09-26
	
	//Pojazdy...
	CVehicle merceder;
	CVehicle ford;
	CVehicle volvo;
	CVehicle volkswagen;
	CVehicle peugeot;
	CVehicle renault;
	
	CSejf tajne;
	tajne.AddVehicle(renault, 123);
	tajne.AddVehicle(peugeot, 56);
	tajne.AddVehicle(volkswagen, 768);
	tajne.AddVehicle(volvo, -10);
	tajne.AddVehicle(ford, 123);
	tajne.AddVehicle(merceder, 123);


	tajne.RunAllVehicle();

//2013-10-03
//Dziedziczenie

	CFlyVehicle lotnia;

	//Wrog sprawdzenie

//2013-10-10
//SMFL sprawdzenie

	sf::RenderWindow window(sf::VideoMode(500, 500), "SFML works!", sf::Style::Close);
    
	//2013-10-24
	
	sf::Texture gahara;
	if (!gahara.loadFromFile("gahara.png"))
	{

	}
	
	sf::Sprite sprite;
	sprite.setTexture(gahara);
	
	// position
	//sprite.setPosition(sf::Vector2f(10, 50));	// absolute position
	//sprite.move(sf::Vector2f(5, 10));			// offset relative to the current position

	// rotation
	//sprite.setRotation(90);		// absolute angle
	//sprite.rotate(15);			// offset relative to the current angle

	
	// scale
	//sprite.setScale(sf::Vector2f(0.5f, 2.f));	// absolute scale factor
	//sprite.scale(sf::Vector2f(1.5f, 1.5f));		// factor relative to the current scale

	//program uruchomiony tak d³ugo jak d³ugo jest otwarte okno
    while (window.isOpen())
    {
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();
        }

        window.clear();
        window.draw(sprite);
        window.display();
    }

//2013-10-17
//Sortowanie - poznajemy s³owo static
	
	int Tablica[10];
	Tablica[0] = 1;
	Tablica[1] = 23;
	Tablica[2] = 11;
	Tablica[3] = -27;
	Tablica[4] = 150;
	Tablica[5] = -100;
	Tablica[6] = 120;
	Tablica[7] = 76;
	Tablica[8] = 63;
	Tablica[9] = 12;

	//tradycyjne podejœcie
	//CSort sortownia;
	//sortownia.BubleSort(Tablica, 9);

	//uruchomienie metody statycznej
	CSort::BubleSort(Tablica, 9);

	//"Nowoczesnoœæ"

	list<int> box;

	box.push_back(23);
	box.push_back(11);
	box.push_back(30);
	box.push_back(-345);
	box.push_back(100);
	box.push_back(-12);
	box.push_back(45);
	
	box.sort();

	//uruchomienie metody statycznej QuickSort
	CSort::QuickSort(Tablica, 0, 9);
	

//31-10-13
//szablony funkcji

	//int w=Suma<int>(24,7);

	//float wynik;
	//wynik=Suma<float>(13.4f,45.6f);

	TSchowek<int> tajne;

	//napisz funkcje 4 parametry
	int Max(int d, int e, int f, int g) 
	{
		//Funkcja zwraca najwieksza z liczb a,b,c,d
		d=21;
		e=3;
		f=40;
		g=10;
		return d;
		if e>d return e;
		if f>d return f;
		if g>d return g;
	}



	return 0;
}
