

#include <iostream>

//Napisz program, kt�ry ma pobra� od u�ytkownika liczb� dodatni�. 
//Zabezpiecz program przed pobieraniem liczb ujemnych.
void task1()
{
	int numberFromUser;
	std::cout << "Podaj liczb� doodatni�:\n";
	std::cin >> numberFromUser;
	if (numberFromUser < 0)
	{
		std::cout << "Podaj liczb� doodatni�:\n";
		std::cin >> numberFromUser;
		if (numberFromUser < 0)
		{
			std::cout << "Podaj liczb� doodatni�:\n";
			std::cin >> numberFromUser;
			if (numberFromUser < 0)
			{
				std::cout << "Podaj liczb� doodatni�:\n";
				std::cin >> numberFromUser;
				if (numberFromUser < 0)
				{
					std::cout << "Podaj liczb� doodatni�:\n";
					std::cin >> numberFromUser;
					//wklejamy ca�ego If'a
				}
			}
		}
	}

	std::cout << "Liczba dodatnia pobrana od uzytkownika " << numberFromUser << "\n";
}


//Napisz program, kt�ry ma pobra� od u�ytkownika liczb� dodatni�. 
//Zabezpiecz program przed pobieraniem liczb ujemnych.
void task2()
{
	int numberFromUser;

	do
	{
		std::cout << "Podaj liczb� doodatni�:\n";
		std::cin >> numberFromUser;
	} while (numberFromUser < 0);

	std::cout << "Liczba dodatnia pobrana od uzytkownika " << numberFromUser << "\n";
}

//Napisz program, kt�ry wylosuje liczbe, a u�ytkownik b�dzie musia� j� zgadn��.

void task3()
{
	const int LOWER_RANGE = 1;
	const int UPPER_RANGE = 100;
	srand(time(NULL));
	int randomNumber = rand() % (UPPER_RANGE - LOWER_RANGE + 1) + LOWER_RANGE;

	//std::cout << randomNumber << "\n";

	/*
	if (numberFromUser != randomNumber)
	std::cout << "Podaj liczbe";
	std::cin >> numberFromUser
		{
		if (numberFromUser != randomNumber)
		std::cout << "Podaj liczbe";
		std::cin >> numberFromUser
		}...
	*/

	int numberFromUser;
	do
	{
		std::cout << "Podaj cyfre\n";
		std::cin >> numberFromUser;
		if (numberFromUser > randomNumber)
			std::cout << "mniej\n";
		if (numberFromUser < randomNumber)
			std::cout << "wi�cej\n";
	} while (numberFromUser != randomNumber);
	std::cout << "Gratulacje!!!!\n";
}

//Napisz program wy�wietlaj�cy liczby ca�kowite z przedzia�u <1,x>.
//Gdzie x pdaje u�ytkownika.
void task4()
{
	//std::cout << "1, 2, 3, 4, 5, 6 \n";
	unsigned long long upperRange;
	std::cout << "Podaj g�rny zakres wi�kszy b�d� r�wny 1\n";
	std::cin >> upperRange;

	/*
	std::cout << "1, ";
	if (upperRange > 1)
	{
		std::cout << "2, ";
		if (upperRange > 2)
		{
			std::cout << "3, ";
			if (upperRange > 3)
			{
				std::cout << "4, ";
				//.....
			}
		}
	}
	*/

	unsigned long long currentNumber = 0;
	do
	{
		//currentNumber = currentNumber + 1;
		//currentNumber += 1;
		//currentNumber++;
		++currentNumber;
		std::cout << currentNumber << ", ";
	} while (upperRange > currentNumber);
}

//Napisz program, kt�ry policzy sum� cyfr podanej przez u�ytkownika liczby.
void task5()
{
	int number;
	std::cout << "Podaj liczb�\n";
	std::cin >> number;

	int sum = 0;
	int rest;

	/*
	rest = number % 10;
	sum = sum + rest;
	number = number / 10;
	if (number != 0)
	{
		rest = number % 10;
		sum = sum + rest;
		number = number / 10;
		if (number != 0)
		{
			rest = number % 10;
			sum = sum + rest;
			number = number / 10;
			if (number != 0)
			{
				rest = number % 10;
				sum = sum + rest;
				number = number / 10;
				//if (number != 0) ...
			}
		}
	}
	*/

	do
	{
		rest = number % 10;
		sum = sum + rest;
		number = number / 10;
	} while (number != 0);

	std::cout << "Suma " << sum << "\n";
	//4125
}

//Popro� uzytkownika o liczbe do puki nie poda 0
//Oblicz �redni� arytmetyczn� podanych liczb
void task6()
{

	int numberFromUser, sum, rest, number;
	sum = 0;
	rest = 0;

	/*if (numberFromUser != 0);
	{
		std::cout << "Podaj liczb�\n ";
		std::cin >> numberFromUser;
		sum += numberFromUser;
		rest += 1;
	}

		if (numberFromUser != 0);
		{
			std::cout << "Podaj liczb�\n ";
			std::cin >> numberFromUser;
			sum += numberFromUser;
			rest += 1;
		}


			if (numberFromUser != 0);
			{
			std::cout << "Podaj liczb�\n ";
			std::cin >> numberFromUser;
			sum += numberFromUser;
			rest += 1;
			}
				if... */


	do
	{
		std::cout << "Podaj liczb�\n ";
		std::cin >> numberFromUser;
		sum += numberFromUser;
		rest += 1;
	} while (numberFromUser != 0);

	number = sum / rest;

	std::cout << "Srednia arytmetyczna wynosi " << number;



}


//napisz program kt�ry poprosi u�ytkownika o podanie dowolnej l. ca�kowitej
//nast�pnie program obliczy ilo�� cyfr
void task7()
{
	int numberFromUser;
	int	rest = 0;
	std::cout << "Podaj liczb� \n";
	std::cin >> numberFromUser;
	
	do
	{
		rest = numberFromUser % 10;
		std::cout << rest << ", ";
		numberFromUser = numberFromUser / 10;

	} while (numberFromUser != 0);
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
	task7();
}
