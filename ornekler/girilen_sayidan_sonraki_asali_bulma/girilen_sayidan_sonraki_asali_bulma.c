/*
 ============================================================================
 Name        : girilen_sayidan_sonraki_asali_bulma.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>

int main()	{

	int sayi,i,j,sayac=0;
	printf("sayı ? ");
	scanf("%d",&sayi);

	for(i=sayi; i<sayi*2; i++)	{

		for(j=2; j<sayi; j++){

			sayac=0;

			if(i%j==0)	{

				sayac++;
				sayi++;
						}

						}

		if(sayac==0){


			printf("%d",i);
		}









	}}

