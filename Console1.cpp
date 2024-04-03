#include <iostream>
#include <cstdlib>
#include <ctime>

//Задача 1
double sum(double a, double b, double c, double d, double e = 0) {
    return a + b + c + d + e;
}
//Задача 2
inline double sum2(double a, double b, double c) {
    return a + b + c;
}
//Задача 3
void max(int a, int b, int c) {
    int max = a;
    max > b ? max = max : max = b;
    max > c ? max = max : max = c;
    std::cout << "Максимальное число из первых трех - " << max;
}
void max(double a, double b, double c) {
    double max = a;
    max > b ? max = max : max = b;
    max > c ? max = max : max = c;
    std::cout << "Максимальное число из первых трех - " << max;
}
void max(short a, short b, short c) {
    short max = a;
    max > b ? max = max : max = b;
    max > c ? max = max : max = c;
    std::cout << "Максимальное число из первых трех - " << max;
}

//Задача 4
template <typename T>
T zero(T arr[], int size) {
    for (int i = 0; i < size; i++) 
        if (arr[i] < 0) {
            for (int j = i + 1; j < size; j++) {
                arr[j] = 0;
            }
            break;
        }
    
    return 0;
}


int main()
{
    setlocale(LC_ALL, "Russian");

    //1
    std::cout << "Задача 1. Введите 4 числа:\n";
    double a, b, c, d;
    std::cin >> a >> b >> c >> d;
    std::cout << "Cумма четырех чисел = " << sum(a, b, c, d);

    //2
    std::cout << "\n\nЗадача 2.\n";
    std::cout << "Cумма трех первых чисел = "<< sum2(a, b, c);

    //3
    std::cout << "\n\nЗадача 3.\n";
    max(a, b, c);

    //4
    std::cout << "\n\nЗадача 4.\n";
    int arr[10]{ 3,-4,5,19,3,3,13,22,-9,14 };
    zero(arr, 10);
    std::cout << "{ ";
    for (int i = 0; i < 10; i++)
        std::cout << arr[i] << ", ";
    std::cout << "\b\b }\n";


    return 0;
}
