#include <iostream>

//Napisz program, kt�ry wczyta np. 5 liczb, a nast�pnie wy�wietli je w odwrotnej kolejno�ci.
void task1()
{
    const unsigned short ARRAY_SIZE = 5;
    //std::cout << ARRAY_SIZE; b��d!!!
    int numbers[ARRAY_SIZE];
    //numbers[2]=70;

    /* std::cout << "Podaj dan� \n";
    std::cin << numbers[0];
    std::cout << "Podaj dan� \n";
    std::cin << numbers[1];
    std::cout << "Podaj dan� \n";
    std::cin << numbers[2];
    std::cout << "Podaj dan� \n";
    std::cin << numbers[3];
    std::cout << "Podaj dan� \n";
    std::cin << numbers[4];*/
    
    for (int i = 0; i < ARRAY_SIZE; i++)
    {
        std::cout << "podaj dan�\n";
        std::cin >> numbers[i];
    }
    std::cout << "Podane dane w odwrotnej kolejno�ci:\n";
    for (int i = ARRAY_SIZE-1;i >= 0;  i--)
    {
        std::cout << numbers[i] << ", ";
    }
    std::cout << "\n";
}

//Napisz program obliczaj�cy �redni� arytmetyczn� element�w liczb ca�kowitych



int main()
{
    setlocale(LC_CTYPE, "polish");
    task1();
}


