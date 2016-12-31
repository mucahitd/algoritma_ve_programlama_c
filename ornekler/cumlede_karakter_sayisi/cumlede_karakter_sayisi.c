

#include<stdio.h>


char k[25],kr;

int i;

int main()	{


	// bu program . girene kadar sizden cümle alır ve karakter sayısını yazar, . hariçtir. //

	printf("Lütfen bir cümle giriniz. ");

	i=0;

	do{
		kr=getchar();

		k[i]=kr;

		i++;
	}

	while(kr!='.'&& i<25);

	printf("\nGirdiginiz Cumle\n%s",k);
	printf("\nkarakter sayısı \n%d",i-1);


	}
