/* lab7op.cpp : 
Із заданого рядка символів вилучити слова, довжина яких менша, за вказану користувачем.
*/

#include "stdafx.h"
#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<iostream>

using namespace std;
int n = 0;


void input(char*);

int main()
{

	_getch();
    return 0;
}

void input(char* str) {
	printf("Enter your string:\n");
	do
	{
		printf("Enter n:\n");
		scanf("%d", &n);
	} while (n<0);
}