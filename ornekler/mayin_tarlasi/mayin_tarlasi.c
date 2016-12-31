/*
 ============================================================================
 Name        : mayin_tarlasi.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()	 {

	int tarla[10][10];
	int satir,sutun,puan=0,i;
	srand(time(NULL));

		for(i=0; i<10; i++)	{
			satir=rand()%10;
			sutun=rand()%10;

			if(tarla[satir][sutun]!=1)
				tarla[satir][sutun]=1;

			else

				i--;
		}

	do{
		printf("lütfen satır giriniz.."); scanf("%d",&satir);
		printf("lütfen sütun giriniz.."); scanf("%d",&sutun);

		if(tarla[satir][sutun]!=1) {

			puan++;
			printf("başarılı hamle ! puanınız : %d\n",puan);
								   }}

		while(tarla[satir][sutun]!=1);
		printf("mayına bastınız puanınız %d ",puan);

		return 1;
	}




