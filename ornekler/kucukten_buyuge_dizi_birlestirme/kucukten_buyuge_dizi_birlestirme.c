

#include <stdio.h>

#define BOYUT 3

int main()	{

	int i,j,takas;
	int dizi1[BOYUT]={1,4,9};
	int dizi2[BOYUT]={2,7,3};
	int dizi3[2*BOYUT];

	for(i=0; i<2*BOYUT; i++)	{

		if(i<3)		{

		dizi3[i]=dizi1[i];
							}


		else

			dizi3[i]=dizi2[i-3];
	}

	for(i=0;i<BOYUT*2-1;i++){

			for(j=0;j<BOYUT*2-i-1;j++)	{

				if(dizi3[j] > dizi3[j+1]) {

					takas=dizi3[j];

					dizi3[j]=dizi3[j+1];

					dizi3[j+1]=takas; }

}}

	for(i=0; i<BOYUT*2; i++)	{

		printf("%d\t",dizi3[i]);

	}
}
