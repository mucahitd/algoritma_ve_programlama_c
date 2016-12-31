

#include <stdio.h>
#include <string.h>

int main()	{

	char cumle[25]={""};
	int karakter_sayisi,i;
	printf("cümleyi yaz..");

	fgets(cumle, sizeof(cumle), stdin);
	karakter_sayisi=strlen(cumle)-1;


	for(i=karakter_sayisi; i>=0; i--)	{


		printf("%c",cumle[i]);

	}



}
