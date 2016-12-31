/*
 ============================================================================
 Name        : diziyi_ters_cevirme.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>

#define BOYUT 10

int main() {

	int dizi[BOYUT]={4,8,3,1,18,9,21,20,5,17};
	int i,takas;
	for(i=0; i<BOYUT/2; i++)	{

		takas=dizi[i];
		dizi[i]=dizi[BOYUT-1-i];
		dizi[BOYUT-1-i]=takas;
	}

	for(i=0; i<BOYUT; i++) {

	printf("%d\t",dizi[i]);

}}


