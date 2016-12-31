/*
 ============================================================================
 Name        : birim_matris.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#define BOYUT 5

int main()	{

	int a[BOYUT][BOYUT];

	int i,j;

	for(i=0; i<BOYUT; i++)

	{

		for(j=0; j<BOYUT; j++) {

			if(i==j) 	   {

				a[i][j]=1;
							}

			else a[i][j]=0;

		printf("%5d",a[i][j]); }

		printf("\n");

}

}


