#include <stdio.h>
#include<stdlib.h>
#include <iostream>
#include <time.h>
#include <math.h>
#include <stdarg.h>

using namespace std;


unsigned i, j;

enum type_number { positive, negative, all };
//enum command_type {p,u,l};

int cSymb(char*str, char symb)
{
	int count = 0;
	for (int i = 0;i < strlen(str);i++)
		if (*(str + i) == symb)
			count++;
	return count;
}

int  CopyS(char *a, char*b, int n)
{

	for (int i = 0; i < n;i++)
	{
		*b = *a;
		a++;
		b++;
	}

	*a = '\0';
	return 0;
}

//	a. - р печатать входные данные такими, какими они есть.
//	b. - u преобразовать входные данные к верхнему регистру.
//c. - l преобразовать входные данные к нижнему регистру.
void Command(char *a, char ct, int r)
{
	if (ct == 'p')
	{
		printf("%s\n", a);
	}
	else if (ct == 'u')
	{
		char a1;
		for (int i = 0; i < r; i++)
		{
			a1 = toupper(*a);
			printf("%c", a1);
			a++;
		}
	}
	else if (ct == 'l')
	{
		char a1;
		for (int i = 0; i < r; i++)
		{
			a1 = tolower(*a);
			printf("%c", a1);
			a++;
		}
	}

}

void seven(char *a, int r)
{
	for (int i = 0; i < r - 1;i++)
	{
		a[0] = toupper(a[0]);
		if (a[i] == '.')
		{
			a[i + 1] = toupper(a[i + 1]);
		}
	}
}

void ten(char*a, int r)
{
	int count = 0;
	for (int i = 0; i < r;i++)
	{
		if (a[i] == ';' || a[i] == ':')
		{
			if (a[i - 1] == 'а')
				count++;
		}
	}
	printf("%d\n", count);
}

void reverse_words(char*a, int r)
{
	for (int i = r; i >= 0;i--)
	{
		printf("%c", a[i]);
	}
	printf("\n");
}

void eight(char *a, int r)
{
	char b[20]="";
	int count = 0;
	for (int i = 0; i < r - 1; i++)
	{
		for (int k = 0;k < 20;k++)
		{
			if (a[i] != b[k])
			{
				count = 1;
				for (int j = i + 1;j < r;j++)
				{
					if (a[i] == a[j])
						count++;
				}
				b[i] = a[i];
			}
		}
			printf("буква %c встречается %d раз\n", a[i], count);
	}
}

void code(char*a, int r)
{
	for (int i = r-1; i >=0; i--)
		printf("%c", a[i]);
	printf("\n");
}

