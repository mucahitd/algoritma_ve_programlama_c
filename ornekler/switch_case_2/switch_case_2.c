/*
 ============================================================================
 Name        : switch_case_2.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>

int main()	{

	int ay;
	printf("1-12 arasında bir sayı yazın lütfen");
	scanf("%d",&ay);

	switch(ay) {

	case 1: { printf("Ocak"); 	break;	}
	case 2: { printf("Şubat"); break; }
	case 3: { printf("Mart"); break; }
	case 4: { printf("Nisan"); break; }
	case 5: { printf("Mayıs"); break; }
	case 6: { printf("Haziran"); break; }
	case 7: { printf("Temmuz"); break; }
	case 8: { printf("Ağustos"); break; }
	case 9: { printf("Eylül"); break; }
	case 10: { printf("Ekim"); break; }
	case 11: { printf("Kasım"); break; }
	case 12: { printf("Aralık"); break; }

	}
}
