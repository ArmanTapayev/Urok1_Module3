#include<stdlib.h>
#include<stdio.h>
#include<iostream>
#include<locale.h>
#include<time.h>
#include "Header.h"

void main()
{
	srand(time(NULL));
	setlocale(LC_ALL, "Rus");
	printf("������ �������� 6 �������.\n");
	printf("��� ���������� �������� 0.\n");
	int n;
	do
	{
		printf("������� ����� ��������: ");
		scanf("%d", &n);
		switch (n)
		{
			case 1:
			{
				/*1. �������� ������� int f(int h, int m, int s), 
				������� ��������� ��� ����� ��������� (���� h, ������ m � ������� s)
				� ���������� ���������� ������, ��������� � ������ ���.*/
				int h, m, s;
				printf("������� ���������� ����� h, ����� m � ������ s: ");
				scanf("%d %d %d", &h, &m, &s);

				printf("���������� ������, ��������� � ������ ���: %d\n",task1(h, m, s));
	
				system("pause");
				system("cls");
			}break;

			case 2:
			{
				/*2. �������� ������� int f(int m, int d), ������� ��������� ��� �����
				��������� (����� m � ���� d) � ���������� ���������� ����, ���������
				� ������ ����. �������, ��� � ������ ������ 30 ����.*/
				int m, d;
				printf("������� ���������� ������� m � ���� d: ");
				scanf("%d %d", &m, &d);

				printf("���������� ����, ��������� � ������ ����: %d\n", task2(m, d));

				system("pause");
				system("cls");
			}break;

			case 3:
			{
				/*3. �������� ������� int f(int m, int d), ������� ��������� ��� �����
				��������� (����� m � ���� d) � ���������� ���������� ����, ���������
				� ������ ����. �������, ��� � ������ ������ 30 ��� 31����, � ��� �� ����������.*/
				int m, d;
				printf("������� ���������� ������� m � ���� d: ");
				scanf("%d %d", &m, &d);

				printf("���������� ����, ��������� � ������ ����: %d\n", task3(m, d));

				system("pause");
				system("cls");
			}break;

			case 4:
			{
				/*4. �������� ������� f(int& m1, int& m0, int N), ������� ���������� ������
				� ��������� ����� ����������� ������������ ����� N.*/
				int N, m1, m0;
				printf("������� ���������� ����������� ����� N: ");
				scanf("%d", &N);

				task4(&m1, &m0, N);

				printf("������ � ��������� ����� ����������� ������������ ����� N: m1 = %d, m0 = %d\n", m1, m0);

				system("pause");
				system("cls");
			}break;

			case 5:
			{
				/*5. �������� ������� int f(int m1, int m2, int m3), ������� ������� ����������
				����� �� ��������� ������ ���� ����� �����. ����������� �������� �������� if*/
				int m1, m2, m3;
				printf("������� ��� ����� ����� m1, m2, m3: ");
				scanf("%d %d %d", &m1, &m2, &m3);

				printf("���������� ����� �� ��������� ������ ���� ����� �����: %d\n", task5(m1, m2, m3));

				system("pause");
				system("cls");
			}break;

			case 6:
			{
				/*6. �������� ������� f(int m, int n), ������� ���������� ��� ���� ����� ����� m � n,
				������ �� ������ ����� �������*/
				int m, n;
				printf("���������� ���������� ������ �� ����� n ����� m.\n");
				printf("������� ��� ����� ����� m, n: ");
				scanf("%d %d", &m, &n);

				task6(m, n);

				system("pause");
				system("cls");
			}break;
		
		}
	} while (n != 0);
}