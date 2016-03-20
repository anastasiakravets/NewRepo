
/* lab7op.cpp :
Із заданого рядка символів вилучити слова, довжина яких менша, за вказану користувачем.
*/

#include "stdafx.h"
#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<iostream>
#include <ctype.h>
#include <string.h>
#define DEL  " .,:;\n\t"
#define N 1024

using namespace std;

char s[N], *word;
int i, j, k, len, n;

void input();
void detect(char*);
void output(char*);

int main()
{
	input();
	detect(s);
	output(s);
	_getch();
	return 0;
}

void input()
{
	printf("Enter your phrase \n");
	fgets(s, N, stdin);
	printf("\nEnter n = ");
	scanf_s("%d", &n);
}

void detect(char* s)
{
	i = k = 0;
	while (s[i])
	{
		while (s[i] && strchr(DEL, s[i]))
			s[k++] = s[i++];
		j = i;
		while (s[i] && !strchr(DEL, s[i]))
			i++;
		if ((len = i - j) <= n)
		{
			strncpy(s + k, s + j, len);
			k += len;
		}
	}
	s[k] = '\0';
}
void output(char*)
{
	puts(s);
}
