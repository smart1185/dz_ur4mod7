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
		cout << "������� �������" << endl;
		cin >> N;
		switch (N)

		{
		case 1:
			/*����� �������� ��������� ����������� ����� ��� ������������� strcpy, strlen � ������ �� ��������.
			������� ������ - ������ ��������� �� ������, �������������� �����, � ��������� �� destination �������.*/
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
			/*"����������" ������ ��� �����������. �� ����, ���� � ��� ���� "abcdef", �� ����� ����������
			��������� �� ������ �������� "fedcba". � �������� ������� ������ - ��������� �� ������ � ����� ��������������� strlen*/
		{
			char string1[] = "string copy";
			char string2[20];
			char *p = string1;
			char *dest = string2;
			stringCopyRew(dest, p);
			printf("%s\n", dest);
		}
		break;

		default: {cout << "������� � ����� ������� �� ����������" << endl; }
		}
	}
	while (N > 0 && N < 3);
	cout << "\t\t\t\t\t�����." << endl;
	system("pause");
}