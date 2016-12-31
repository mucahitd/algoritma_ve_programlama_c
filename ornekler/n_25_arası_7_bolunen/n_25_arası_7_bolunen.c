/*
 ============================================================================
 Name        : n_25_arası_7_bolunen.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>

int main()	{


	int n,i,sayi=0;

	printf("bir n sayısı giriniz");
	scanf("%d",&n);

	for(i=n; i<n+25; i++)  {

		if(i%7==0)            {

			sayi++;

			printf("%d %d \n",i,sayi);   }

	}

}
