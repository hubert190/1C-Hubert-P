#include <iostream>

/*
Operatory warunkowe:
>-wi�ksze
<-mniejszo��
>=-wi�ksze b�d� r�wne
<=-mniejsze b�d� r�wne
==-r�wne
!=-r�ne

Operatory logiczne:
&& - and
! - not
|| - or


a	b		a&&b		a||b		!a
F	F		 F			  F			 T
F	T		 F			  T			T
T	F        F			  T			F
T	T		 T			  T			F
*/

//Napisz program, kt�ry wy�wietli informacje, czy liczba jest dodatnia czy nie.
void task1()
{
	int number;
	std::cout << "Podaj liczbe\n ";
	std::cin >> number;

	if (number > 0)
		std::cout << "Liczba jest dodatnia\n ";

	if (number < 0)
		std::cout << "Liczba jest ujemna\n ";

	if (number == 0)
		std::cout << "Liczba r�wna sie 0\n";





}


//Napisz program, kt�ry wy�wietli informacje o tym czy liczba jest parzysta czy nieparzysta
void task2()

{
	int number;
	std::cout << "Podaj liczbe \n";
	std::cin >> number;

	if (number % 2 == 0)
		std::cout << "Liczba jest parzysta \n";
	else
		std::cout << "Liczba jest nieparzysta \n";




}

//Napisz program , kt�ry wy�wietli czy liczba jest z zakresu <1,10)
void task3()
{
	int number;
	std::cout << "Podaj liczbe \n";
	std::cin >> number;

	if (number >= 1) //wersja 1
	{
		if (number < 10)
			std::cout << "Liczba jest w przedziale\n";
		else
			std::cout << "Liczba z poza zakresu\n";
	}
	else
		std::cout << "Liczba z poza zakresu";



	if (number >= 1) //wersja 2
		if (number < 10)
			std::cout << "Liczba jest w przedziale\n";
		else
			std::cout << "Liczba z poza zakresu\n";
	else
		std::cout << "Liczba z poza zakresu";




	if (number >= 1 && number < 10)  //wersja 3
		std::cout << "Liczba jest w przedziale\n";
	else
		std::cout << "Liczba z poza zakresu\n";


	if (number < 1 || number >= 10)  //wersja 4
		std::cout << "Liczba z poza zakresu\n";
	else
		std::cout << "Liczba jest w przedziale\n";


	if (!(number >= 1 || number < 10))  //wersja 5
		std::cout << "Liczba z poza zakresu\n";
	else
		std::cout << "Liczba jest w przedziale\n";

}

void task4()
{
	int firstNumber, secondNumber;
	std::cout << "Podaj liczbe\n ";
	std::cin >> firstNumber;
	std::cout << "Podaj liczbe\n ";
	std::cin >> secondNumber;

	if (secondNumber != 0)
	{
		int quoitent = firstNumber / secondNumber;
		std::cout << "Wynik dzielenia " << quoitent << "\n";
	}
	else
		std::cout << "Dzielenie przez zero!!! \n";


}

/*
* .Napisz program, kt�ry poprosi u�ytkownika o podanie liczby ca�kowitej i sprawdzi, czy jest ona podzielna zar�wno przez 3, jak i przez 5. Wy�wietl odpowiedni komunikat.
* .Napisz program, kt�ry poprosi u�ytkownika o podanie masy cia�a(w kilogramach) i wzrostu(w metrach).
Na podstawie tych danych oblicz wska�nik BMI(Body Mass Index) i wy�wietl odpowiedni komunikat informuj�cy o stanie zdrowia.
* .Napisz program, kt�ry poprosi u�ytkownika o podanie d�ugo�ci trzech odcink�w i sprawdzi, czy mo�na zbudowa� z nich tr�jk�t.Wy�wietl odpowiedni komunikat.
* .Napisz program, kt�ry poprosi u�ytkownika o podanie liczby dodatniej i obliczy jej pierwiastek kwadratowy, je�li jest to mo�liwe.Wy�wietl wynik lub odpowiedni komunikat, je�li liczba jest ujemna.
* .Program sprawdzaj�cy czy podana data jest poprawna(np.sprawdzaj�c, czy dzie� jest z zakresu od 1 do 31, miesi�c od 1 do 12 itd.)
*/



//Napisz program, kt�ry poprosi u�ytkownika o podanie dw�ch liczb ca�kowitych i sprawdzi, czy s� one r�wne.Wy�wietl odpowiedni komunikat.
void task5()
{
	int firstNumber, secondNumber;
	std::cout << "Podaj  liczbe ca�kowit�\n ";
	std::cin >> firstNumber;
	std::cout << "Podaj liczbe ca�kowit�\n ";
	std::cin >> secondNumber;

	if (secondNumber == firstNumber)
		std::cout << "Liczby s� r�wne\n ";
	else
		std::cout << "Liczby nie s� r�wne\n ";

}

//Napisz program, kt�ry poprosi u�ytkownika o podanie wieku i sprawdzi, czy osoba jest pe�noletnia.Wy�wietl odpowiedni komunikat.
void task6()
{
	int number;
	std::cout << "Podaj wiek \n";
	std::cin >> number;
	if (number >= 18)
		std::cout << "Jeste� pe�noletni\n";
	else
		std::cout << "Jestes nie pe�noletni\n";
}

//Napisz program, kt�ry poprosi u�ytkownika o podanie liczby ca�kowitej i obliczy jej warto�� bezwzgl�dn�. Wy�wietl wynik.
void task7()
{
	int number;
	std::cout << "Podaj liczbe ca�kowit� \n";
	std::cin >> number;
	if (number < 0)
		std::cout << "Warto�� bezwzgl�dna: " << number * -1 << " /n";
	else
		std::cout << "Warto�� bezwzgl�dna:  " << number << " /n";
}


//Napisz program, kt�ry poprosi u�ytkownika o podanie liczby od 1 do 7 i wy�wietli odpowiadaj�cy mu dzie� tygodnia.
void task8()
{
	int numberOfDay;
	std::cout << "Podaj liczbe od 1 do 7 \n";
	std::cin >> numberOfDay;
	if (numberOfDay == 1)
		std::cout << "Dzie� tygodnia to poniedzia�ek \n";
	if (numberOfDay == 2)
		std::cout << "Dzie� tygodnia to wtorek \n";
	if (numberOfDay == 3)
		std::cout << "Dzie� tygodnia to �roda \n";
	if (numberOfDay == 4)
		std::cout << "Dzie� tygodnia to czwartek \n";
	if (numberOfDay == 5)
		std::cout << "Dzie� tygodnia to pi�tek \n";
	if (numberOfDay == 6)
		std::cout << "Dzie� tygodnia to sobota \n";
	if (numberOfDay == 7)
		std::cout << "Dzie� tygodnia to niedziela \n";
}


//Napisz program, kt�ry poprosi u�ytkownika o podanie dw�ch liczb ca�kowitych i wy�wietli wi�ksz� z nich.
void task9()
{
	int number1, number2;
	std::cout << "Podaj 1 liczbe ca�kowit� \n";
	std::cin >> number1;
	std::cout << "Podaj 2 liczbe ca�kowit� \n";
	std::cin >> number2;
	if (number1 > number2)
		std::cout << "Lczba 1 jest wi�ksza od liczby 2 \n";
	else 
		std::cout << "Lczba 2 jest wi�ksza od liczby 1\n";

}

//Napisz program, kt�ry poprosi u�ytkownika o podanie roku i sprawdzi, czy jest to rok przest�pny.Wy�wietl odpowiedni komunikat.
void task10()
{
	int year;
	std::cout << "Podaj rok \n";
	std::cin >> year;

	if (year > 0 && year % 4 ==0  && year % 100 !=0 || year % 400==0 )
		std::cout << "Rok jest przest�pny";
	else
		std::cout << "Rok nie jest przest�pny";
		


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
	task10();
}