/*
 ============================================================================
 Name        : fonksiyonlu_basamak_sayisi_bulma.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include<stdio.h>

int sayi,bsmk;

int basamak(int b)	{

	int	i=1;

	do	{

		b=(b-b%10)/10;

		i++;
	}

	while(b>9);

	return i;
}
int main(){

	printf("Sayi giriniz : ");

	scanf("%d",&sayi);

	bsmk=basamak(sayi);

	printf("\n%d basamaklidir.",bsmk);

}
