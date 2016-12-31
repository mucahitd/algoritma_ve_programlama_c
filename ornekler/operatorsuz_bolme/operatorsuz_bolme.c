/*
 ============================================================================
 Name        : operatorsuz_bolme.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>

int main() {

	int x,y,sayac=0;

	printf("bölünecek sayıyı gir: ");

	scanf("%d",&x);

	printf("kaça bölelim: ");

	scanf("%d",&y);

	while (x>=y) {

	x=x-y;

	sayac=sayac+1;

	}

	printf("bolum: %d , kalan: %d",sayac,x);

}
