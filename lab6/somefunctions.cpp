#include <math.h>
#define N 10
#include "somefunctions.hpp"

//����������� �������� �����
bool isPrime(int x)
{
    //����
    if (x < 2)
        return false;
    for (int d = 2; d <= sqrt(x); d++)
        if (x % d == 0)
            return false;
    return true;
}
// ����� ���� ����������
void swap(int& a, int& b)//������ & ����� ���������� ������� ����������� � ���� �� ������ ����� ����������� � ����
{
    int tmp = a;
    a = b;
    b = tmp;
}
// ����������
void sort(int n, int mas[N])
{
    for (int i = 0; i < n - 1; i++)
        for (int j = i + 1; j < N; j++)
            if (mas[i] < mas[j])
                swap(mas[i], mas[j]);
}
// ����� ����� ���� �����
int sumdigit(int x)
{
    int sum = 0;
    while (x > 0)
    {
        sum += x % 10;
        x /= 10;
    }
    return true;
}

