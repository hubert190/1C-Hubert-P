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
void task2()
{
    //LOWER_RANGE; UPPER_RANGE > przy za�o�eniu, �e LOWER_RANGE <= UPPER_RANGE
    const unsigned short LOWER_RANGE = 5;
    const unsigned short UPPER_RANGE = 7;

    const unsigned short ARRAY_SIZE = 3;
    int numbers[ARRAY_SIZE];

    srand(time(0));
    std::cout << "wylosowane liczby:\n";
    for (int i = 0; i < ARRAY_SIZE; i++)
    {
        numbers[i] = rand() % (UPPER_RANGE - LOWER_RANGE + 1) + LOWER_RANGE;
        std::cout << numbers[i] << ", ";
    }
    std::cout << "\n";

    int sum = 0;
    for (int i = 0; i < ARRAY_SIZE; i++)
    {
        sum = sum + numbers[i];
    }

    double avg = sum * 1.0 / ARRAY_SIZE;
    std::cout << "srdnia wynosi: " << avg << "\n";
}

//Napisz program, kt�ry uzupe�ni tablic� liczbami losowymi a nast�pnie znajdzie minimum oraz maksimum.
void task3()
{
    const unsigned short LOWER_RANGE = 5;
    const unsigned short UPPER_RANGE = 7;

    const unsigned short ARRAY_SIZE = 3;
    int numbers[ARRAY_SIZE];

    srand(time(0));
    std::cout << "wylosowane liczby:\n";
    for (int i = 0; i < ARRAY_SIZE; i++)
    {
        numbers[i] = rand() % (UPPER_RANGE - LOWER_RANGE + 1) + LOWER_RANGE;
        std::cout << numbers[i] << ", ";
    }
    std::cout << "\n";
    int max = numbers[0];
    for (int i = 0; i <ARRAY_SIZE; i++)
    {
        if (numbers[i] > max)
            max = numbers[i];
    }
    std::cout << "Maks wynosi: " << max << "\n";

    int min = numbers[0];
    for (int i = 0; i < ARRAY_SIZE; i++)
    {
        if (numbers[i] < min)
            min = numbers[i];
    }
    std::cout << "Min wynosi: " << min << "\n";
}

int main()
{
    setlocale(LC_CTYPE, "polish");
    task3();
}


