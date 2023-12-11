#include <iostream>

void task1()
//napisz program kt�ry wy�wietli Hello word tyle ile razy chce u�ytkownik
{
	int howManyTime;
	std::cout << "ile razy mam powt�rzy�?\n";
	std::cin >> howManyTime;
	//i != howManyTime
	for (int i = 0; i != howManyTime; i++)
	{
		std::cout << "Hello word\n";
		i++;
	}
}

void task2()
//napisz program kt�ry wy�wietli l. parzyste do podanej przez u�ytkownika liczby
{
	int upperRange;
	std::cout << "Podaj g�rn� granice \n";
	std::cin >> upperRange;


	for (int i = 0; i <= upperRange; i += 2)
	{
		std::cout << i << "\n";

	}
}

void task3()
//Program obliczaj�cy sum� liczb od 1 do 100
{
	int sum = 0;
	for (int i = 0; i <= 100; i += 1)
	{
		sum = sum + i;
	}
	std::cout << sum;

}

void task4()
// Program sprawdzaj�cy czy podana liczba jest liczb� doskona�� (czyli tak�, kt�rej suma dzielnik�w 
// (z wy��czeniem samej siebie) jest r�wna danej liczbie, np. 6 jest liczb� doskona��, poniewa� 1 + 2 + 3 = 6).
{
	int number;
	std::cout << "Podaj liczb�\n";
	std::cin >> number;

	int sum = 0;
	for (int i = 1; 1 < number; i++)
	{
		if (number % i == 0)
		{
			sum += i;
		}
	}
	std::cout << "suma z dzielnik�w" << sum << "\n";

	if (sum == number)
		std::cout << "jest liczb� doskona��\n";
	else
		std::cout << "jest liczb� doskona��\n";

}


void task5()
//Program wy�wietlaj�cy na ekranie kwadraty liczb od 1 do 10 (np. 1, 4, 9, 16 itd.)
{
	int i = 0;
	for (int number = 1; number <= 10; number++)
	{
		std::cout << i<<"\n";
		i = number * number;
	}
	std::cout << i;

}


//Program wy�wietlaj�cy na ekranie tabliczk� mno�enia od 1 do 9 (np. 1x1 = 1, 1x2 = 2, 1x3 = 3 itd.).
void task6()
{
	int number, i;

	for (i = 0; i <= 9; i++)
	{
		std::cout << "1x" << i << " = ";
		number = 1 * i;
		std::cout << number << "\n";
	}
}

//Program wy�wietlaj�cy na ekranie wszystkie liczby podzielne przez 3 z zakresu od 1 do 100
void task7()
{
	int number;
	std::cout << "Liczby podzielneprzez 3 z zakresu 1 - 100:\n";

	for (int i = 1; i <= 100; i++)
	{
		if (i % 3 == 0)
			std::cout << i << "\n";
	}
}

//Program obliczaj�cy sum� kwadrat�w liczb od 1 do 10
void task8()
{
	int number;
	int sum = 0;

	for (int i = 1; i <= 10; i++)
	{
		number = i * i;
		sum = sum + number;
	}
	std::cout << "Suma kwadratow liczb 1 - 10 = " << sum << "\n";
}


//Program obliczaj�cy n!  (4! = 1*2*3*4)
void task9()
{
	int number;
	int x = 0;
	int result = 1;
	std::cout << "Podaje liczbe: ";
	std::cin >> number;

	for (int i = 1; i <= number; i++)
	{
		x++;
		result = result * x;
	}
	std::cout << "n! = " << result;
}

//Program wy�wietlaj�cy na ekranie ci�g Fibonacciego do 20 elementu
// (ci�g Fibonacciego to ci�g gdzie ka�dy element jest sum� dw�ch poprzednich, np. 0, 1, 1, 2, 3, 5, 8, 13 itd.)
void task10()
{
	int number=0;
	for (int i=0;i<10;i++)
	{
		std::cout << i;
		
	}
}

//Program, k�ry wy�wietli poni�sze cztery zwory:
//	****    54321        121212        122333
//	***     65432        212121        223334444
//	**      76543        121212        333444455555
//	*       87654        212121        444455555666666

int main()
{
	setlocale(LC_CTYPE, "polish");
	task10();
	
}

