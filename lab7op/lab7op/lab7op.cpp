/* lab7op.cpp : 
�� �������� ����� ������� �������� �����, ������� ���� �����, �� ������� ������������.
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
#include <string.h>

int main()
{
	char s[N],
		*word;
	int i, j, k, len, n;
	printf("Enter your phrase \n ");
	fgets(s, N, stdin);
	printf("\nEnter n = ");
	scanf_s("%d", &n);
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
	puts(s);
	_getch();
	return 0;
}