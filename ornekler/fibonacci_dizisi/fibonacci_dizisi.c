/*
 ============================================================================
 Name        : fibonacci_dizisi.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>

int main()	{

	int i,a=0;
	int b=1;
	int c;
	for(i=1; i<=30; i++) {

		c=a+b;

		printf("%d\n",c);

		a=b;
		b=c;




	}

}
