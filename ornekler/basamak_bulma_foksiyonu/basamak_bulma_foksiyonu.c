/*
 ============================================================================
 Name        : basamak_bulma_foksiyonu.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */



#include <stdio.h>

#include <string.h>

	char sayi[25] = {""};

	int basamak_sayisi;

	int basamak(int basamak_sayisi)	{

	basamak_sayisi=strlen(sayi);

	return basamak_sayisi;

	}

	int main()	{

		printf("bir sayı giriniz");

			fgets(sayi, sizeof(sayi), stdin);

			basamak_sayisi=strlen(sayi);

			printf("basamak sayısı : |%d|  ",basamak_sayisi-1);
// strlen fonksiyonu sonlandırma karakterinide karakter olarak kabu ettği için -1 //




	}
