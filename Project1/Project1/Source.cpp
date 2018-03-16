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

		printf("z+1 имеет значение = %p (%d)\n", z + 1, *(z + 1));//не правильное значение
		printf("отличное от z[0] + 1 = %p (%d)\n", z[0] + 1, *(z[0] + 1));
		//z[0][0]
		//*(z[0])

		printf("**z = %d, equals *&z[0][0] = %d, *&z[0] = %d\n", **z, *&z[0][0], *&z[0]);


		int(*ptC)[2]; // указатель на 2 столбца
		ptC = z;

		int *pt = &z[0][0];//1-я строка 1-й столбец
		pt + 1;//1-я 2-стол
		pt + 2;//2-я 1-стол
		pt + 3;//2-я 2стол
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
		/*4. Найти место первого появления в строке S1 какого-либо символа из строки S2 и, если строка S1 не содержит символов строки S2, возвращает значение –1.*/
	{
		char a[] = "text of pext";
		char b[] = "posu njkes";
		char *res = sistOf(a, b);
		printf("%c-%p\n", *res, res);

	}

	case 4:

		/*5.	В данной действительной квадратной матрице порядка N найти сумму элементов строки, в которой расположен элемент с наименьшим значением. Предполагается, что такой элемент единственный.*/
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
		/*6.	Дан одномерный массив из N элементов. Указатель содержит адрес ячейки памяти. Заменить указанный адрес адресом максимального элемента массива. Вывести значение максимума с помощью указателя.*/
	{
		int a[7];
		fillAr(a, 7);
		PrintMatrix(a, 7);
		int *p = Max(a, 7);
		printf("\n\n%d  (%p)\n\n", *p, &p);
	}

	case 6:
		/*9.Функция находит в строке пары одинаковых фрагментов и возвращает указатель на первый. С помощью функции найти все пары одинаковых фрагментов.*/
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
		/*Функция находит в строке пары инвертированных фрагментов (например "123apr" и "rpa321") и возвращает указатель
		на первый. С помощью функции найти все пары.*/
	{
		char arr[60] = "123apr test testry qwerty";
		slovo(arr);

	}

	}
	system("pause");
}