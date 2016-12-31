

#include <stdio.h>
#include <ctype.h>

int main()	{

	char cumle[20]={""};

	int i=0;
	char yenisi;

	printf("cümleyi giriniz..");

	fgets(cumle, 20, stdin);

	for(i=0; cumle[i]!='\0'; i++) {

		yenisi=toupper(cumle[i]);

	printf("%c",yenisi);


	}


 }
