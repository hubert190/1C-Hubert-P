#include <iostream>
/*Typy znakowe
-char-1 bajt, ca�kowitoliczbowa ze znakiem <-128, 127>
*/


//Napisz program, ktory pobierze od u�ytkownika znak i wy�wietli go.
void task1()
{
	char characterFromUser;
	std::cout << "Podaj znak\n";
	std::cin >> characterFromUser;
	std::cout << "Poda�e� znak: " << characterFromUser;
}



//Napisz program, kt�ry wczyta znak z klawiatury 
//i sprawdzi czy jest to ma�a litera alfabetu.
void task2()
{
	unsigned char characterFromUser;
	std::cout << "Podaj znak\n";
	std::cin >> characterFromUser;

	//if (characterFromUser >= 97 && characterFromUser <= 122)
	if (characterFromUser >= 'a' && characterFromUser <= 'z')
		std::cout << "Jest to ma�a litera alfabetu\n";
	else
		std::cout << "Nie jest to ma�a litera alfabetu\n";

	/*char x = 'a';
	std::cout << x;
	x = 'g' + 1;
	std::cout << x;
	x = 100;
	std::cout << x;*/

}

//napisz program, kt�ry poprosi cie o imie
void task3()
{
	std::string userName;
	std::cout << "Podaj swoje imie \n";
	std::cin >> userName;

	std::cout << "witaj " << userName << " tutaj.\n";


}

//program sprawdzaj�cy czy podane has�o jest zgodne z has�em "abc123"
void task4()
{
	std::string password;
	std::cout << "podaj has�o\n";
	std::cin >> password;

	if (password == "abc123")
		std::cout << "has�o prawdziwe";
	else
		std::cout << "has�o nie poprawne";
}

//napisz program, kt�ry sprawdzi ile w �a�cuchu znak�w jest lirer 'a'
void task6()
{
	std::string textFromUser;
	std::cout << "Podaj �a�cuch znak�w\n";
	std::cin >> textFromUser;

	int numberOfCharacters = 0;

	//std::cout << "pierwszy znak to" << textFromUser[0]<<"\n";
	//textFromUser[1]='x';
	//std::cout << "ilo�� znak�w " << textFromUser.length() << "\n";

	for (int i = 0; i < textFromUser.length(); i++)
	{
		if (textFromUser[i] == 'a')
			numberOfCharacters++;
	}
	std::cout << "ilo�� ma�ych liter a wynosi: " << numberOfCharacters << "\n";
}

/*

* Program sprawdzaj�cy czy podane dwa s�owa s� anagramami (czyli takimi, kt�re zawieraj� te same litery, ale w innym uk�adzie, np. "klasa" i "salka")
* Program wyci�gaj�cy informacje z numeru PESEL
* Program implementuj�cy algorytm szyfrowania Cezara (proste szyfrowanie, w kt�rym ka�dy znak w tek�cie jest zast�powany innym znakiem, przesuni�tym o sta�� liczb� pozycji w alfabecie).

* Program kt�ry na wej�ciu przyjmie r�wnanie a na wyj�ciu da r�wnanie w odwrotnej notacji polskiej ONP. Np. na wej�ciu 2+3*4 na wyj�cu da 234*+
* Program, kt�ry na wej�ciu przyjmie r�wanie w ONP a na wyj�ciu wy�wietli wynik r�wania.
* Algorytm szyfrowania AtBash Cipher - algorytm szyfruj�cy, w kt�rym ka�da litera jest zamieniana na liter� z przeciwnej strony alfabetu (np. A na Z, B na Y itd.)
*/

//Napisz program, kt�ry b�dzie prosi� o has�o.Nie przepu�ci dalej dop�ki nie zostanie ono podane prawid�owo.
void task7()
{
	std::string password;


	do {
		std::cout << "podaj has�o\n";
		std::cin >> password;
	} while (password != "abc123");
	std::cout << "has�o poprawne";

}

//* Napisz program, kt�ry pobiera od u�ytkownika ci�g znak�w i wy�wietla liczb� samog�osek i sp�g�osek w tym ci�gu.
void task8()
{
	std::string chracterOfNumbers;;
	std::cout << "Podaj �a�cuch znak�w\n";
	std::cin >> chracterOfNumbers;;
	int numberOfCharacters = 0;
	int numberOfVowels = 0;
	int numberOfconsonants = 0;
	for (int i = 0; i < chracterOfNumbers.length(); i++)
	{
		if
			(
				chracterOfNumbers[i] == 'a' ||
				chracterOfNumbers[i] == '�' ||
				chracterOfNumbers[i] == 'e' ||
				chracterOfNumbers[i] == '�' ||
				chracterOfNumbers[i] == 'i' ||
				chracterOfNumbers[i] == 'o' ||
				chracterOfNumbers[i] == '�' ||
				chracterOfNumbers[i] == 'u' ||
				chracterOfNumbers[i] == 'y'
				) numberOfVowels++;
		else
			numberOfconsonants++;
	}
	std::cout << "samog�oski:" << numberOfVowels << " sp�g�oski:" << numberOfconsonants;

}

//*Popro� u�ytkownika o wprowadzenie liczby ca�kowitej w systemie dziesi�tnym.Nast�pnie skonwertuj t� liczb� na system dw�jkowy(binarny) i wy�wietl wynik.
void task9()
{
	int numberOfUser, rest = 0;
	std::string numberBin;
	std::cout << "podaj liczbe\n";
	std::cin >> numberOfUser;
	while (numberOfUser != 0)
	{
		rest = numberOfUser % 2;
		numberOfUser /= 2;
		if (rest == 0)
			numberBin = "0" + numberBin;
		else
			numberBin = "1" + numberBin;
	}
	
	std::cout << numberBin;
}

//*Program sprawdzaj�cy czy podany ci�g znak�w jest palindromem(czyli takim, kt�ry czytany od ty�u jest taki sam, jak czytany od przodu, np. "kajak")
void task10()
{

}


//Algorytm szyfrowania AtBash Cipher - algorytm szyfruj�cy, w kt�rym ka�da litera jest zamieniana na liter� z przeciwnej strony alfabetu(np.A na Z, B na Y itd.)
void task11()
{
	char word,reversedWord;
	std::cout << "Podaj ci�g znak�w";
	std::cin >> word;

	for (int i = 0; i < .length(); i++)
	{

	}
	

}




int main()
{
	setlocale(LC_CTYPE, "polish");
	task10();

}

