#include <iostream>
#include <locale>
#include "my_func.h"


int main()
{
    setlocale(LC_ALL, "RUS");

    int a,b;

    std::cout << "������� ����������� ����� a: ";
    std::cin >> a;
    std::cout << "������� ����������� ����� b: ";
    std::cin >> b;
    std::cout << finLCM(a,b);

    return 0;
}
