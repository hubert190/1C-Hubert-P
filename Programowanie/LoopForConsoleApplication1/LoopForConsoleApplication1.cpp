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

//Program obliczaj�cy n!.
void task6()
{

}

int main()
{
	setlocale(LC_CTYPE, "polish");
	//task1();
	//task2();
	//task3();
	//task4();
	//task5();
	task6()
}

