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

using namespace std;

int n = 0,
	i=0;
char arr[100], 
	*p,
	arr1[30];

void input(char*);
void detect(char*);
void output();

int main()
{
	input(arr);
	detect(arr);
	output();
	_getch();
    return 0;
}

void input(char* str) {
	printf("Enter your string:\n");
	fgets(arr, 100, stdin);
	do
	{
		printf("Enter n:\n");
		scanf_s("%d", &n);
	} while (n<0);
}

void detect(char* str) {
	p = arr;
	while (p && *p != '\0' && *p != 10)
	{
		while (isspace(*p))
			p++;
		sscanf_s(p, "%s", arr1);
		if (strlen(arr1)>n)
		{
			memmove(p, p + strlen(arr1) + 1, strlen(arr) + 2);
		}
		else p += strlen(arr1);
	}
}

	void output()
	{
		printf("Result: %s", arr);
	}