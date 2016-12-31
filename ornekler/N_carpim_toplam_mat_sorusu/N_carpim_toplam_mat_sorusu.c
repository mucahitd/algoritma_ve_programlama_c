/*
 ============================================================================
 Name        : N_carpim_toplam_mat_sorusu.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>

int main() {

	int N,i,j,k,toplam=0;
	int tek_carpim=1,cift_toplam=0;

	printf("N>20 olmak üzere bir N değeri giriniz..");
	scanf("%d",&N);

	for(i=10; i<N; i++)    {

		toplam=i+toplam;   }

	for(j=5; j<N; j=j+2)     {

		tek_carpim=j*tek_carpim; }

	for(k=14; k<N; k=k+2)    {

		cift_toplam=k+cift_toplam; }

	printf(" 10-N arası tüm sayıların toplamı %d\n",toplam);
	printf("5-N arası tek sayıların çarpımı %d\n",tek_carpim);
	printf("14-N arası çift sayıların toplamı %d\n",cift_toplam);


}
