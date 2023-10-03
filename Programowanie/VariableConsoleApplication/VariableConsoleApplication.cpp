
#include <iostream>



//napisz program kt�ry wczyta liczb� od u�ytkownika i j� wy�iwtli na konsoli	
void task1()
{
	int numberFromUser;
	std::cout << "Podaj liczbe\n";
	std::cin >> numberFromUser;
	std::cout << "Podales " << numberFromUser << "\n";

}

//Program obliczaj�cy �redni� arytmetyczn� dw�vh liczb
void task2()
{
	int firstNumber, secondNumber;
	std::cout << "Podaj pierwsza liczbe\n";
	std::cin >> firstNumber;
	std::cout << "Podaj druga liczbe\n";
	std::cin >> secondNumber;
	int average;
	average = (firstNumber + secondNumber) / 2;

	std::cout << "Srednia to: " << average << "\n";

}
//Program do obliczania pola prostok�ta
void task3()
{
	int sideA, sideB;
	std::cout << "Podaj d�ugo�� pierwszego boku \n ";
	std::cin >> sideA;
	std::cout << "Podaj d�ugo�� pierwszego bko \n ";
	std::cin >> sideB;
	int area;
	area = sideA * sideB;
	std::cout << "Pole wynosi : " << area << "\n ";
}
//Program obliczaj�cy obj�to�� sto�ka
void task4()
{
	int ray, height;
	std::cout << "Podaj d�ugo�� promienia \n ";
	std::cin >> ray;
	std::cout << "Podaj d�ugo�� wysoko�ci";
	std::cin >> height;
	int volume;
	volume = (height / 3) * 3.1415 * (ray * ray);
	std::cout << "osto�ka wynosi : " << volume << "\n";
}

//Program obliczaj�cy pole ko�a.
void task5()
{
	int ray;
		std::cout << "Podaj d�ugo�� promienia";
		std::cin >> ray;
		int area;
		area = 3.1415 * (ray * ray);
		std::cout << "Pole d�ugo�ci wynosi : " << area << "\n";



}

//Program obliczaj�cy warto�� wyra�enia a^2 + b^2




int main()
{
	setlocale(LC_CTYPE, "polish");
     //task1()
	//task2()
	//task3()
	//task4()
	//task5()
	task6()
}


//algorytm- sko�czony zbi�r instrukcji/zada� kt�ry rozwi�zuje zadany problem
/*
Zapis algorytm�w
-rysunki
-opis s�owny
-w punktach
-schemat blokowy
-kod �r�d�owy danego j�zyka programowania
-pseudokod

Zmienna- pewien obszar w pami�ci operaacyjnej, w kt�rej mo�na w danej chwiliprzechowa� tylko jedn� dan�.

Instrukcja deklaracji zmiennej:
typ_zmiennej nazwa_zmiennej;

Typ zmiennej-wielko�� obszaru pami�ci, interpretacja ci�gu bit�w
int- l. ca�kowita ze znakiem < -2 147 483 648, 2 147 483 648 >
short- 2 bajtowa l. ca�kowita ze znakiem <-32 768, 32 767>
long- to samo co int
long long- 8 bajtowa l. ze znakiem <-9 223 372 036 854 775 808, 9 223 372 036 854 775 807>
unsigned- zmienna bez znaku  <0, 2*max + 1>
float- 4 bajtowa l. rzeczywista, dok�adno�� 6-7 cyfr po przecinku
long double- 12 bajtowa l.rzeczywista, dok�adno�� 19 - 20 cyfr po przecinku
double- 8 bajtowa l.rzeczywista, dok�adno�� 15 - 16 cyfr po przecinku

Nazwa zmienne nazwa obszaru w pami�ci
Warunki niezbdne
-alfabet angielski aA do zZ�
-Cyfry arabskie 0-9
-podkre�lenie (pod�oga)
-pierwszym znakiem nie mo�e byc cyfra
-unikalny  w swoim zakresie widoczno�ci
-nie mo�e by� to s�owo kluczowe (zarezerwowane) danego j�zyka

Warunki programist�w
- nazwa zmiennej powinna oddaw� charakter przechowywanych danych
- je�li wiele s��w to w miejsce spacji podkre�lenie lub zaczynaja od drugiego s�owa piszemy je z du�ej litery
-piszemy po angielsku




*/

