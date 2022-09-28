#include <iostream>
#include "my_func.h"
#include <locale>



//������� �������� ��� ����� ��� ��������� ���������
int multi(int a, int b)
{
    if(b == 0)return 0;

    return a + multi(a ,--b);
};
//������� ����� ��� ����� ��� ������������� ���������� ������� �� �������� � ���
int shair(int *a, int b)
{
    if((*a) < b)
    {
        return 0;
    }

    *a = (*a) - b;

    return 1 + shair( a , b);
};
//������� ��������� ��������� ����� n
int faktorial(int n)
{
    if(n == 0)
    {
        return 1;
    }
    return  n * faktorial(n-1);
};
//������� ��������� ������������������ ����� �������� �� ����� n
int fibonachi(int n)
{
    if( n < 2)
    {
        return n;
    }
    return fibonachi(n - 1) + fibonachi(n - 2);
};
//������� �������� � ������� n �������
void rise_to_matrix(int n[2][2], int stepen)
{
    if(stepen < 2) return;

    int arr[2][2] = {1, 1, 1, 0};
    int arrTem[2][2] = {0};
    copyMatrix(arrTem,n);


    for(int i = 0; i < 2; i++)
    {
        for(int j = 0;j < 2;j++)
        {
            n[i][j] = arr[i][0] * arrTem[0][j] + arr[i][1] * arrTem[1][j];
        }
    }

    rise_to_matrix(n, --stepen );

};
//������� ������� ������� � �������
void displayMatrix(int arr[2][2])
{
    for(int i = 0; i < 2; i++)
    {
        for(int j = 0; j < 2; j++)
        {
            std::cout << arr[i][j] <<' ' ;
        }
        std::cout << std::endl;
    }
};
//������� �������� �������� ����� ������� � ������
void copyMatrix(int arrA[2][2],int arrB[2][2])
{
        for(int i = 0; i < 2; i++)
    {
        for(int j = 0; j < 2; j++)
        {
            arrA[i][j] = arrB[i][j];
        }
    }
};
//������� ������� ����� 1/0! + .... 1/n!
float oneOnFactorial(int n)
{
    if(n == 0) return 1;

    return  1 / (float)faktorial(n) + oneOnFactorial(--n);
};
//������� ������� �� ���� �����
int finMin(int a, int b)
{
    if(a > b)
    {
        return b;
    }
    else
    {
        return a;
    }
}

//������� ������� ���������� ����� ��������
int finLCM(int a, int b)
{
    setlocale(LC_ALL, "RUS");

    int minimum = finMin(a,b);

    while(1)
    {
        if(minimum == 0)
        {
            std::cout << "� ���� ����� ����������� ������ �������� ���" << std::endl;
            return 0;
        }

        if((a % minimum == 0) & (b % minimum == 0))
        {
            return minimum;
        }
        minimum--;
    }
};
