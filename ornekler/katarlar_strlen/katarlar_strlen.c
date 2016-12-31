/*
 ============================================================================
 Name        : katarlar_strlen.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <string.h>

int main()	{


	char cumle[25] = {""};

		int karakter_sayisi;

	printf("bir cümle giriniz");

	fgets(cumle, sizeof(cumle), stdin);

	karakter_sayisi=strlen(cumle);

	printf("karakter sayısı : |%d|  ",karakter_sayisi-1);





}
