

#include<stdio.h>

char sifre[50];

int i,key=10;

char *sifrele(char c[]){

	for(i=0; c[i]!=NULL; i++){

		c[i]=c[i]+key;
	}

	return c;
}

int main (){

	printf("Kelimeyi giriniz : ");

	scanf("%s",sifre);

	char *sfr=sifrele(sifre);

	printf("\n Sifreli deger %s",sfr);
}
