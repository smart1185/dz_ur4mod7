#include <stdio.h>
#include <iostream>
#include <locale.h>
#include"Header.h"

using namespace std;


void main()
{
	setlocale(LC_ALL, "Rus");	
	int N;
	do
	{
		cout << "Введите задание" << endl;
		cin >> N;
		switch (N)

		{
		case 1:
			/*Нужно написать программу копирования строк без использования strcpy, strlen и прочих им подобным.
			Входные данные - только указатель на строку, оканчивающуюся нулем, и указатель на destination область.*/
		{
			char string1[] = "string copy";
			char string2[20];
			char *p = string1;
			char *dest = string2;
			stringCopy(dest, p);
			printf("%s\n", dest);
		}
		break;

		case 2:
			/*"развернуть" строку при копировании. То есть, если у нас есть "abcdef", то после выполнения
			программы мы должны получить "fedcba". В качестве входных данных - указатель на строку и можно воспользоваться strlen*/
		{
			char string1[] = "string copy";
			char string2[20];
			char *p = string1;
			char *dest = string2;
			stringCopyRew(dest, p);
			printf("%s\n", dest);
		}
		break;

		default: {cout << "Задания с таким номером не существует" << endl; }
		}
	}
	while (N > 0 && N < 3);
	cout << "\t\t\t\t\tКОНЕЦ." << endl;
	system("pause");
}