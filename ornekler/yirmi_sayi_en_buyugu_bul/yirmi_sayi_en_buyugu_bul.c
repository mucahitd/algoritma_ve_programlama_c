/*
 ============================================================================
 Name        : yirmi_sayi_en_buyugu_bul.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>

	int main()	{


		int sayi,i,enb=0;

		for(i=1; i<=20; i++)	{

			printf("%d nolu sayıyı giriniz..",i);
				scanf("%d",&sayi);

			if(sayi > enb) 			{

				enb=sayi;
									}

								}

		printf("en büyük sayı %d",enb);

	}
