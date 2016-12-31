/*
 ============================================================================
 Name        : ilktek_son_cift.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main() {

	int dizi[10]={4,8,3,1,18,9,21,20,5,17};
	int i,j,ilktek,son_cift;

	for(j=0; j<10; j++)	{

		if(dizi[j]%2==1) 		{

			ilktek=dizi[j]; break;

									}	}

		for(i=9; i>=0; i--)	{

			if(dizi[i]%2==0) 	{

				son_cift=dizi[i]; break;

									}

							}

		printf("dizideki ilk tek sayı |%d| son çift sayı |%d|",ilktek,son_cift);
	}

