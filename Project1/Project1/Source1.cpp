#include <stdio.h>
#include <iostream>
#include <locale.h>
#include <time.h>

using namespace std;


void printMatrix(int(*pt)[2])
{
	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 2; j++)
		{
			printf("z[%d][%d] = %5d (%p) \t", i, j, pt[i][j], &pt[i][j]);
			printf("z[%d][%d] = %5d (%p) \t", i, j, *(*pt + 1) + j), ((pt + i) + j);

		}
		printf("\n");
	}
}


void fillAr(int *p, int row, int col)
{
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			*(p + i*col + j) = 1 + rand() % 100;
		}
	}
}

void fillAr(int *p, int col)
{
	for (int i = 0; i < col; i++)
	{

		*(p + i) = 1 + rand() % 5;
	}
}

void PrintMatrix(int *p, int col)
{
	for (int i = 0; i < col; i++)
	{
		printf("%d\t", *(p + i));
	}
	printf("\n");

}



void PrintMatrix(int *p, int row, int col)
{
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			printf("%d\t", *(p + i*col + j));
		}
		printf("\n");
	}
}

int randNom(int *p, int row, int col)
{
	return *(p + (0 + rand() % (row*col) + 1));
}


char*sistOf(char* p, char *pt)
{
	char result = -1;
	int i = 0;
	int j = 0;

	while (*p != '\0')
	{
		j = 0;
		while (*pt != '\0')
		{
			if (p[i] == pt[j])
				return &p[j];
			j++;
		}

		i++;
	}

	return &result;
}

int Min(int *p, int row, int col)
{
	int min = *(p + 0 * col + 0);
	int x = 0;
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			if (min > *(p + i*col + j))

			{
				min = *(p + i*col + j);
				x = i;
			}
		}
	}
	return x;
}

int Sum(int *pt, int end)
{
	int sum = 0;
	for (int i = 0; i < end; i++)
	{
		sum += *(pt + i);
	}
	return sum;
}


int *Max(int *p, int col)
{
	int *max = p;
	for (int i = 0; i < col; i++)
	{
		if (*max < *(p + i))
			max = (p + i);
	}
	return max;
}


void swap(int *a, int j)
{
	int temp = *(a+j);
	if (*(a + j) < *(a + j - 1))
	{
		*(a+j) = *(a + j - 1);
		*(a + j - 1) = temp;
	}
}

void sortArr(int *a, int col)
{
	for (int i = 0; i < col; i++)
	{
		for (int j = col - 1; j > i; j--)
		{
			swap(a, j);
		}
	}
}

int *findCouples(int *a)
{	
	if (*a == *(a + 1))
		return a;
	else return NULL;
}


char equal(char *start, char *end, int cnt)
{
	for (int i = 0; i < cnt / 2; i++)
	{
		if (*(start + i) != *(end - i))
		{
			break;
			return 0;
		}
	}
	return 1;
}

char slovo(char *arr)
{
	int start=0, end=0;
	while (arr != '\0')
	{
		if (*arr == ' ')
		{
			if (equal(arr - end, arr, end) == 1)
				printf("palindrom");
		}
		end++;
		arr++;
	}
}

