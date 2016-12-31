/*
 ============================================================================
 Name        : ondalikli_ayir.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>

int main()	{

	float sayi;
    int tamkisim;
	float ondalikkisim;
	printf("ondalıklı bir sayı giriniz..");

	scanf("%f",&sayi);

	tamkisim=(sayi*10)/10;

	ondalikkisim=sayi-tamkisim;

	printf("sayının orjinali : %f\n",sayi);

	printf("sayının tam kısmı : %d\n",tamkisim);

	printf("sayının ondalık kısmı : %f\n",ondalikkisim);

}
