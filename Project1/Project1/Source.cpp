#include <stdio.h>
#include <iostream>
#include <locale.h>
#include <time.h>

#include"Header.h"


using namespace std;


void main()
{
	setlocale(LC_ALL, "Rus");
	srand(time(NULL));
	int N;
	cout << "vvedite zadanie";
	cin >> N;
	switch (N)

	{
	case 1:
	{
		int z[4][2] = { {2,4},{8,10},{12,3},{89,5} };

		printMatrix(z);

		printf("\n\n\n");
		printf("%p - %p - %p\n", &z, &z[0], &z[0][0]);

		printf("z+1 ����� �������� = %p (%d)\n", z + 1, *(z + 1));//�� ���������� ��������
		printf("�������� �� z[0] + 1 = %p (%d)\n", z[0] + 1, *(z[0] + 1));
		//z[0][0]
		//*(z[0])

		printf("**z = %d, equals *&z[0][0] = %d, *&z[0] = %d\n", **z, *&z[0][0], *&z[0]);


		int(*ptC)[2]; // ��������� �� 2 �������
		ptC = z;

		int *pt = &z[0][0];//1-� ������ 1-� �������
		pt + 1;//1-� 2-����
		pt + 2;//2-� 1-����
		pt + 3;//2-� 2����
	}

	case 2:
	{
		int a[5][7];
		int *p = &a[0][0];

		fillAr(p, 5, 7);
		PrintMatrix(p, 5, 7);
		printf("%d\n", randNom(p, 5, 7));
	}

	case 3:
		/*4. ����� ����� ������� ��������� � ������ S1 ������-���� ������� �� ������ S2 �, ���� ������ S1 �� �������� �������� ������ S2, ���������� �������� �1.*/
	{
		char a[] = "text of pext";
		char b[] = "posu njkes";
		char *res = sistOf(a, b);
		printf("%c-%p\n", *res, res);

	}

	case 4:

		/*5.	� ������ �������������� ���������� ������� ������� N ����� ����� ��������� ������, � ������� ���������� ������� � ���������� ���������. ��������������, ��� ����� ������� ������������.*/
	{
		int a[3][4];
		int *p = &a[0][0];
		fillAr(p, 3, 4);
		PrintMatrix(p, 3, 4);
		int min = Min(p, 3, 4);
		printf("%d\n", min);
		int sum = Sum((p + (min * 4)), 4);
		printf("%d\n", sum);
	}

	case 5:
		/*6.	��� ���������� ������ �� N ���������. ��������� �������� ����� ������ ������. �������� ��������� ����� ������� ������������� �������� �������. ������� �������� ��������� � ������� ���������.*/
	{
		int a[7];
		fillAr(a, 7);
		PrintMatrix(a, 7);
		int *p = Max(a, 7);
		printf("\n\n%d  (%p)\n\n", *p, &p);
	}

	case 6:
		/*9.������� ������� � ������ ���� ���������� ���������� � ���������� ��������� �� ������. � ������� ������� ����� ��� ���� ���������� ����������.*/
	{
		int ar[20], *a;
		fillAr(ar, 20);
		PrintMatrix(ar, 20);
		printf("\n\n");
		sortArr(ar, 20);
		PrintMatrix(ar, 20);
		printf("\n\n");
		for (int i = 0; i < 20; i++)
		{
			if (findCouples(ar+i) != NULL)
				printf("%d\t", i);
			
		}
	}

	case 7:
		/*������� ������� � ������ ���� ��������������� ���������� (�������� "123apr" � "rpa321") � ���������� ���������
		�� ������. � ������� ������� ����� ��� ����.*/
	{
		char arr[60] = "123apr test testry qwerty";
		slovo(arr);

	}

	}
	system("pause");
}