#include<stdlib.h>
#include<stdio.h>
#include<iostream>
#include<locale.h>
#include<time.h>
#include "Header.h"

/* Задание 1 */
int task1(int h, int m, int s)
{
	return s + m * 60 + h * 3600;
}

/* Задание 2 */
int task2(int m, int d)
{
	return m*30 + d;
}

/* Задание 3 */
int task3(int m, int d)
{
	int sum=0;
	switch (m)
	{
		case 1:
			sum = 31;
			break;
		case 2:
			sum = 31+28;
			break;
		case 3:
			sum = 31 + 28 + 31;
			break;
		case 4:
			sum = 30 + 31 + 28 + 31;
			break;
		case 5:
			sum = 31 + 30 + 31 + 28 + 31;
			break;
		case 6:
			sum = 30 + 31 + 30 + 31 + 28 + 31;
			break;
		case 7:
			sum = 31 + 30 + 31 + 30 + 31 + 28 + 31;
			break;
		case 8:
			sum = 31 + 31 + 30 + 31 + 30 + 31 + 28 + 31;
			break;
		case 9:
			sum = 30 + 31 + 31 + 30 + 31 + 30 + 31 + 28 + 31;
			break;
		case 10:
			sum = 31 + 30 + 31 + 31 + 30 + 31 + 30 + 31 + 28 + 31;
			break;
		case 11:
			sum = 30 + 31 + 30 + 31 + 31 + 30 + 31 + 30 + 31 + 28 + 31;
			break;
		case 12:
			sum = 31 + 30 + 31 + 30 + 31 + 31 + 30 + 31 + 30 + 31 + 28 + 31;
			break;
	}
	return sum + d;
}

/* Задание 4 */
void task4(int *m1, int *m0, int N)
{
	*m0 = N % 10;
	N /= 10;
	*m1 = N % 10;
}

/* Задание 5 */
int task5(int m1, int m2, int m3)
{
	if(m1 < m2 && m1 < m3)
	{
		return m1;
	}
	else if(m2 < m1 && m2 < m3)
	{
		return m2;
	}
	else if (m3 < m1 && m3 < m2)
	{
		return m3;
	}
}

/* Задание 5 */
void task6(int m, int n)
{
	if (n%m == 0)
		printf("%d кратно %d.\n", n, m);
	else
		printf("%d не кратно %d.\n", n, m);
}