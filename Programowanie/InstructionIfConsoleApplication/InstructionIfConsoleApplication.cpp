#include <iostream>

/*
Operatory warunkowe:
>-wi�ksze
<-mniejszo��
>=-wi�ksze b�d� r�wne
<=-mniejsze b�d� r�wne
==-r�wne
!=-r�ne
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

	std::cout << "Kolejna instrukcja";

		
}





int main()
{
	task1();
}