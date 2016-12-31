/*
 ============================================================================
 Name        : vizeleri_dosyaya_kaydeden_program.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main()	{

	int dizi[10],dizi_top=0;
	int i,vize=0,dizi_ort;
	for(i=0; i<10; i++) 	   {

		printf("%d. öğrencinin vize notunu giriniz..",i+1);
		scanf("%d",&vize);
		dizi[i]=vize;
							 }
	FILE *dosya;

	dosya = fopen("/home/mucahitd/İndirilenler/ogrenci.txt", "w");

	if( dosya == NULL) {

			puts("dosya açılamadı"), exit(1);
		}



	for(i=0; i<10; i++)	{

		fprintf(dosya,"%5d",dizi[i]);

	}


	for(i=0; i<10; i++)	{

		dizi_top=dizi[i]+dizi_top;

	}

	dizi_ort=dizi_top/10;

	fprintf(dosya,"\n\n\n notların ortalaması : %d ",dizi_ort);

}
