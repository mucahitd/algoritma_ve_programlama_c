

#include <stdio.h>

int main()	{

	int toplam=0,i,ort;
	int dizi[10]={4,8,3,1,18,9,21,20,5,11};

	for(i=0; i<10; i++)	{

		toplam=toplam+dizi[i];
	}

	ort=toplam/10;

	printf("dizideki sayıların toplamı |%d|, sayıların ortalaması |%d|",toplam,ort);

}
