/*
 ============================================================================
 Name        : sayi_sirala.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>

  int main() {

	int sayi1,sayi2,sayi3;

	printf("ilk sayıyı giriniz");

		scanf("%d",&sayi1);

	printf("ikinci sayıyı giriniz");

		scanf("%d",&sayi2);

	printf("son sayıyı giriniz");

		scanf("%d",&sayi3);

	if(sayi1 > sayi2 && sayi2 > sayi3) {

		printf("sıralama %d > %d > %d şeklindedir",sayi1,sayi2,sayi3);
	    }

	else if(sayi1 > sayi3 && sayi3 >sayi2) {

		printf("sıralama %d > %d > %d şeklindedir",sayi1,sayi3,sayi2);
		}
	else if(sayi2 > sayi3 && sayi3 >sayi1) {

		printf("sıralama %d > %d > %d şeklindedir",sayi2,sayi3,sayi1);
		}

	else if(sayi3 > sayi1 && sayi1 > sayi2) {

		printf("sıralama %d > %d > %d şeklindedir",sayi3,sayi1,sayi2);
		}

	else if(sayi2 > sayi1 && sayi1 > sayi3) {

		printf("sıralama %d > %d > %d şeklindedir",sayi2,sayi1,sayi3);
		}

	else if(sayi3 > sayi2 && sayi2 > sayi1) {

		printf("sıralama %d > %d > %d şeklindedir",sayi3,sayi2,sayi1);
		}

}
