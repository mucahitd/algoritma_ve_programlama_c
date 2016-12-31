/*
 ============================================================================
 Name        : selection_sort.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>

#define BOYUT 10

int main() {

	int i, j, en_kucuk, takas;
	int dizi[BOYUT]={4,8,3,1,18,9,21,20,5,17};

	     for (i=0; i<BOYUT-1; i++)	{

	    	 en_kucuk = i;

	    	 for (j=i+1; j<BOYUT; j++)	 {

	    		 if (dizi[j] < dizi [en_kucuk])

	    			 en_kucuk = j;
	         	 	 	 	 	 	 	 	 	 }
	         takas = dizi[i];
	         dizi[i] = dizi[en_kucuk];
	         dizi[en_kucuk] = takas;
	     }

	     	 for(i=0; i<BOYUT; i++)	{

	     		 printf("%d\t",dizi[i]);
	     	 }

}


