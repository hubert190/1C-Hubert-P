#include <iostream>
/*Funkcja
      -zbi�r instrukcji realizuj�cy zadanie
     -podprogram  
  Budowa funkcji :
        -na��wek
        -cia�o funkcji - instrukcje ograniczone nawiasami klamrowymi 
   Nag��wek:
   typ_zwracalnej_danej nazwa_funkcji(parametry)

*/
void task1()
{
    std::cout << "Hello World\n";
}

//Napisz funkcj� uniwersaln�, kt�ra pozwala wy�wietli� dowolny tekst
void task2(std::string textParam)
{
    std::cout << textParam << "\n";
}


// Napisz funkcj� uniwersaln� , kt�ra wy�wietli imi� oraz informacje czy kto� jest pe�noletni czy nie 
void task3(std::string name, int age)
{
    if (age >= 18)
        std::cout << name << " jest pe�noletni/pe�noletnia\n";
    else
        std::cout << name << " jest niepe�noletni/niepe�noletnia\n";
}

//Napisz program, kt�ry przetestuje  zachowanie si� przekazywanych danych przez parametr
void task4(int number)
{
    std::cout << "zmienna number w funkcji task4: " << number << "\n";
    number--;
    std::cout << "zmienna number w funkcji task4: " << number << "\n";
}

//Napisz program, kt�ry wykorzysta przekazywanie parametru przez referencje 
void task5(int& number)
{
    std::cout << "zmienna number w funkcji task5: " << number << "\n";
    number--;
    std::cout << "zmienna number w funkcji task5: " << number << "\n";
}

void task6_GetNumber(int& number)
{
    std::cout << "Podaj liczbe \n";
    std::cin >> number;
}


int sumOfNumebrs(int fn, int sn)
{
    int s;
    s = fn + sn;
    return s;
}



int main()
{
    setlocale(LC_CTYPE, "polish");
    //task1();
   // task1();
   // task2("Witaj �wiecie!!");
   // task2("Ala ma kota");
   // std::string text = "Uczy� si� programowania!!!";
   // task2(text);
   // task3("Jan", 35);
  //  task3("Ala", 14);
    int number = 5;
   // std::cout << "zmienna number w funkcji task4: " << number << "\n";
   // task4(number);
    //std::cout << "zmienna number w funkcji task4: " << number << "\n";

    //task4(9);
    const int NUMBER = 9;
    //task4(NUMBER);


    //std::cout << "zmienna number w funkcji task5: " << number << "\n";
     //task5(number);
    // std::cout << "zmienna number w funkcji task5: " << number << "\n";

     //task5(9) -B��D  przez parametr mo�na przekaza� tylko zmienn�
     //task5(NUMBER) - B��D  przez parametr mo�na przekaza� tylko zmienn�
   
    int numberFromUser = 5;
    task6_GetNumber(numberFromUser);
    std::cout << "U�ytkownik poda� liczbe " << numberFromUser << "\n";

    int firstNumber, secondNumber, sum;
    firstNumber = 9;
    secondNumber = 1;
    sum = sumOfNumbers(firstNumber, secondNumber);
    std::cout << sum << "\n";
}

