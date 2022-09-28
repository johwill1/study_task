#ifndef MY_FUNC_H_INCLUDED
#define MY_FUNC_H_INCLUDED

int multi(int, int );// умножение без использование *
int shair(int*, int);//делени без / и %
int faktorial(int);// вычисление факториала
int fibonachi(int);// вычисление фибоначи
void rise_to_matrix(int [2][2], int); //возведение в степень матрицы 2 на 2
void displayMatrix(int [2][2]);//функция которая выводи матрицу
void copyMatrix(int [2][2], int [2][2]);//копирует значение одной матрицы в другую
float oneOnFactorial(int);//делит еденицу на факториалы от 0 до n и сумирует полученные частные
int finLCM(int, int);//функция находит наибольший общий делитель;
int finMin(int, int);//функция меньшие из двух чисел

#endif // MY_FUNC_H_INCLUDED
