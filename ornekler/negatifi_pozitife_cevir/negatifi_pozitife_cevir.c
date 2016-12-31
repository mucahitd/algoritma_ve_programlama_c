/*
 ============================================================================
 Name        : negatifi_pozitife_cevir.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
int main()	{
	int sayi;
	printf("negatif bir sayı giriniz..");
	scanf("%d",&sayi);

	if(sayi<0) {

		sayi=sayi*-1;
	}

	printf("pozitif oldu %d",sayi);
}
