/*
 ============================================================================
 Name        : kucuk_harfi_buyuk_harf_yapma.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
int main()
{
	char secim;
	printf("küçük harfi giriniz: ");
	scanf("%c",&secim);
	if(64<secim && secim<91)
	 {
	 secim=secim+32;
	 printf("\n :%c",secim);
     }
	else
     {
	 secim=secim-32;
	 printf("\n %c",secim);
     }
}
