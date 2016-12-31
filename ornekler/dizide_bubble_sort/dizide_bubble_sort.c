/*
 ============================================================================
 Name        : dizide_bubble_sort.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>

int main()	{

	int dizi[]={4,8,3,1,18,9,21,20,5,11};
	int i,j,takas;

	for(i=0; i<10-1; i++) 		{

		for(j=0; j<10-i-1; j++) {


		if(dizi[j]<dizi[j+1])	 {

			takas=dizi[j];
			dizi[j]=dizi[j+1];
			dizi[j+1]=takas;
								}

		}
								}

	for(i=0; i<10; i++)		{
	printf("|%d|\t",dizi[i]);
							}




}
