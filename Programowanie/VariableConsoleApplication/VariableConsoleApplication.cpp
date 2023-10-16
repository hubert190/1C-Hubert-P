
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
void task6()
{
	int a, b;
	std::cout << "Podaj warto�� a ";
	std::cin >> a;
	std::cout << "Podaj warto�� b ";
	std::cin >> b;
	int score;
	score = (a * a) + (b * b);
	std::cout << "Wyra�enie a^2 + b^2 wynosi: " << score << "\n";





}

//Program obliczaj�cy pole tr�jk�ta o podstawie b i wysoko�ci h
void task7()
{
	int base_side, height;
	std::cout << "Podaj podstawe tr�jk�ta ";
	std::cin >> base_side;
	std::cout << "Podaj wysoko�� tr�jk�ta ";
	std::cin >> height;
	int area;
	area = (height * base_side) / 2;
	std::cout << "Pole tr�jk�ta wynosi: " << area << "\n";
}

//Program obliczaj�cy obj�to�� kuli o promieniu r
void task8()
{
	int ray;
	std::cout << "Podaj promie� ";
	std::cin >> ray;
	int volume;
	volume = 3 / 4 * 3.14 * (ray * ray * ray);
	std::cout << "Obj�to�� kuli wynosi: " << volume << "\n";
}

//Program obliczaj�cy pole trapezu o podstawach a i b oraz wysoko�ci h
void task9()
{
	int a, b, h;
	std::cout << "Podaj d�ugo�� podstawy a ";
	std::cin >> a;
	std::cout << "Podaj d�ugo�� podstawy b ";
	std::cin >> b;
	std::cout << "Podaj d�ugo�� wysoko�ci h ";
	std::cin >> h;
	int area;
	area = (a + b) * h / 2;
	std::cout << "Pole trapezu wynosi: " << area << "\n";

}

//Program obliczaj�cy �redni� wa�on� trzech liczb z podanymi odpowiednimi wagami w1, w2 i w3.
void task10()
{
	int mark1, mark2, mark3, weight1, weight2, weight3;
	std::cout << "Podaj 1 ocene ";
	std::cin >> mark1;
	std::cout << "Podaj wag� 1 oceny ";
	std::cin >> weight1;
	std::cout << "Podaj 2 ocene ";
	std::cin >> mark2;
	std::cout << "Podaj wag� 2 oceny ";
	std::cin >> weight2;
	std::cout << "Podaj 3 ocene ";
	std::cin >> mark3;
	std::cout << "Podaj wag� 3 oceny ";
	std::cin >> weight3;
	int mean;
	mean = ((mark1 * weight1) + (mark2 * weight2) + (mark3 * weight3)) / (weight1 + weight2 + weight3);
	std::cout << "�rednia ocen wynosi: " << mean << "\n";

}

//Stw�rz program, kt�ry pobiera od u�ytkownika d�ugo�� w metrach i przelicza j� na centymetry i milimetry, wy�wietlaj�c wynik
void task11()
{
	int meters;
	std::cout << "Podaj d�ugo�� w metrach ";
	std::cin >> meters;
	int centimeter;
	centimeter = meters * 100;
	std::cout << "Metry w przeliczeniu na centymetry: " << centimeter << "\n";
	int  milimeter;
	milimeter = centimeter * 10;
	std::cout << "Metry w przeliczeniu na milimetry wynosi: " << milimeter << "\n";
}

//Napisz program, kt�ry konwertuje wprowadzon� kwot� w jednej walucie na inn�, korzystaj�c z okre�lonego kursu wymiany.
void task12()
{
	int priceZl, convert;
	std::cout << "Podaj kwot� w z�ot�wkach: ";
	std::cin >> priceZl;
	std::cout << "Podaj przelicznik: ";
	std::cin >> convert;
	int result;
	result = priceZl * convert;
	std::cout << "Przelicznik ze z�ot�wek na inn� walute wynosi: " << result << "\n"; 

}

//Napisz program, kt�ry wy�wietli informacje o tym czy liczba jest parzysta czy nieparzysta
void task13()

{
	int number;
	std::cout << "Podaj liczbe \n";
	std::cin >> number;

	if (number % 2 == 0)
		std::cout << "Liczba jest parzysta \n";
	else
		std::cout << "Liczba jest nieparzysta \n";


}












	int main()
{
	setlocale(LC_CTYPE, "polish");
	//task1();
	//task2();
	//task3();
	//task4();
	//task5();
	//task6();	
	//task7();
	//task8();
	//task9();
	//task10();
	//task11();
	//task12();
	void task13();
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

