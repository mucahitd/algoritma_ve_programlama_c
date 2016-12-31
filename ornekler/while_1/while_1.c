/*
 ============================================================================
 Name        : while_1.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>

int main()	{

	int sayi,toplam=0;


	printf("Siz 10 veya daha büyük bir sayı girene kadar bu sayılar toplanacaktır.\n");

	printf("Sayı girermisiniz..");
	scanf("%d",&sayi);

	while(sayi<10) {

		toplam=sayi+toplam;

		printf("Sayı girermisiniz..");
		scanf("%d",&sayi);

	}

	printf(" girdiğiniz sayıların toplamı %d",toplam);

}
