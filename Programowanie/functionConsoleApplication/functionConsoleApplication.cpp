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



int main()
{
    setlocale(LC_CTYPE, "polish");
    task1();
    task1();
    task2("Witaj �wiecie!!");
    task2("Ala ma kota");
    std::string text = "Uczy� si� programowania!!!";
    task2(text);
    task3("Jan", 35);
    task3("Ala", 14);

}

