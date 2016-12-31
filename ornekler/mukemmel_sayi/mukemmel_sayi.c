/*
 ============================================================================
 Name        : mukemmel_sayi.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>

int main()	{


	int i,j;
	int sayi=0;

	for(i=1; i<=100; i++) 						{
		sayi=0;
		for(j=1; j<=i/2; j++) 									{


			if(i%j==0)  		{

				sayi=j+sayi;
								} 								}


		if(sayi==i)				{

			printf("%d\n",sayi);

								}


													}

				 }
