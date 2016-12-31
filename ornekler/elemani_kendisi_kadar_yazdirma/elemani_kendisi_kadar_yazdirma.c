/*
 ============================================================================
 Name        : elemani_kendisi_kadar_yazdirma.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>

int main()	{


	int dizi[]={4,8,3,1,18,9,21,20,5,11},i,j;

	for(i=0; i<10; i++)	{


		for(j=1; j<=dizi[i]; j++) {

			printf("|%d|\t",dizi[i]);

		}

		printf("\n");

	}
}
