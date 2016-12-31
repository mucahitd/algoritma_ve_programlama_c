

#include <stdio.h>

int main(){


	int dizi[10]={4,8,3,1,18,9,21,20,5,17};

	int i,enb=1,enk=2;
	int enkyer=0,enbyer=0;

		for(i=0; i<10; i++)
		{
			if(dizi[i] < enk) 	{

		enk=dizi[i];
		enkyer=i;
								}}

		for(i=0; i<10; i++)
		{


			if (dizi[i] > enb) {

				enb=dizi[i];
				enbyer=i;				}}


	printf("dizinin en küçük elemanı |%d|, indisi dizi[%d] en büyük elemanı |%d| indisi dizi[%d]",enk,enkyer,enb,enbyer);

	}

