

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()	{

	char cumle[100]={""},harf;
	int i,harf_sayisi=0,harf_yeri[50];
	printf("cümlenizi giriniz..");
	fgets(cumle, sizeof(cumle), stdin);

	printf("hangi harfi arayalım ?");
	scanf("%c",&harf);

	for(i=0; i<=strlen(cumle); i++)	{

		if(cumle[i]== harf)	{

			harf_yeri[harf_sayisi] = i;
			harf_sayisi++;
		}
	}

	if(harf_sayisi== 0)
		printf("aradığınız harf cümlede yok");

	else
	{
		printf("bulunan harf sayısı |%d|\n",harf_sayisi);

		for(i=0; i<harf_sayisi; i++)
			printf("harfin cümledeki yeri |%d|\n",harf_yeri[i]);
	}
}
