/*
 ============================================================================
 Name        : haneleri_tek_toplamı.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>

int main()	{

	int i,j,onluk,birlik;

	for(i=0; i<10; i++)

		if(i%2==1) {

			printf("%d\n",i);

		}


	for(j=10; j<100; j++)


		birlik=(j%10);

		onluk=(j/10);

		if((birlik+onluk)%2==1)

			printf("%d\n",j);

}
