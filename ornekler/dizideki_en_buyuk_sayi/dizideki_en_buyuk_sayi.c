/*
 ============================================================================
 Name        : dizideki_en_buyuk_sayi.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>


int main()	{

	int dizi[10]={1,11,111,2,22,222,3,33,333,555};

	int i,enb=dizi[0];

	for(i=0; i<10; i++)	{

		if(dizi[i] > enb ) {

			enb=dizi[i];

		}

	}

	printf("dizideki en büyük sayi %d", enb);

}
