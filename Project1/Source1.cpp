#include <stdio.h>
#include <iostream>
#include <locale.h>

using namespace std;

void stringCopy(char *dest, char*src )
{
	while (*dest++ = *src++);
}

void stringCopyRew(char *dest, char*src)
{
	for (int i = 0; i<strlen(src); i++)
	{
		dest[i] = src[strlen(src) - i - 1];
	}
	dest[strlen(src)] = 0;
}