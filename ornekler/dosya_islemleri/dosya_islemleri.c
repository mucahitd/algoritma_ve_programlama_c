/*
 ============================================================================
 Name        : dosya_islemleri.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main()	{

	FILE *dosya;

	int ogr_sayi;
	int i=0,no,not;
	char adi[20];

	printf("kaç tane öğrenci bilgisi gireceksiniz ?");
	scanf("%d",&ogr_sayi);

	dosya = fopen("/home/mucahitd/İndirilenler/ogrenci.txt", "w");

	if( dosya == NULL) {

		puts("dosya açılamadı"), exit(1);
	}

	printf("%d tane öğrencinin bilgilerini giriniz \n",ogr_sayi);

	while(i++<ogr_sayi) 	{


		printf("%d.öğrencinin numarası: ",i); scanf("%d",&no);
		printf("%d.öğrencinin adı: ",i); scanf("%s",adi);
		printf("%d.öğrencinin notu: ",i); scanf("%d",&not);
	    printf("\n");

	  fprintf(dosya,"%5d %10s %5d\n",no,adi,not);

	}

		fclose(dosya);

		puts("Bilgiler kaydedildi !");

		return 0;
}
