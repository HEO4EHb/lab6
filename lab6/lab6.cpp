

#include<iostream>
#include<stdlib.h>
#include<time.h>
#include <fstream>
#include <sstream>
#include <windows.h>
#include "somefunctions.cpp"
//При выполнении лабораторной работы используйте процедуры и функции:
//1.	Функция чтения
//2.	Функция обработки (может быть несколько)
//3.	Функция записи
//Их необходимо расположить в отдельных файлах (*.hpp и *.cpp) в отдельном пространстве имен.
//Дана целочисленная матрица {Aij}i=1...n;j=1..n , n<=100.
//Если в матрице есть строка, содержащая хотя бы одно простое число,
//и имеющая нулевую сумму элементов
//упорядочить столбцы матрицы по невозрастанию нормы.
int main()
{
    setlocale(LC_ALL, "Rus");
    SetConsoleCP(1251);         // Установка кодировки для вывода в консоль
    
    std::ifstream in("input.txt");
    std::ofstream out("output.txt");
    int sum = 0;

        srand(time(0));
        int a[10][10], i, j;
        for (i = 0; i < 10; ++i)
        {
            for (j = 0; j < 10; ++j)    
            {
                a[i][j] = rand();
            }
        }
        for (i = 0; i < 10; ++i)
        {
            for (j = 0; j < 10; ++j)
            {
                std::cout << a[i][j] << '\t';
                sum += a[i][j];
                if (isPrime(a[i][j]) == 1&&sum==0)


                out << a[i][j] << " ";
            }
            std::cout << '\n';    
            out  << std::endl;
        }
        return 0;
}
            
            


