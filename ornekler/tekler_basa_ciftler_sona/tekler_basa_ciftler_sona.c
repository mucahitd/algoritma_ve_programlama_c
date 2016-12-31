
#include <stdio.h>

int main()	{

	int dizi[10]={4,8,3,1,18,9,21,20,5,17};
	int i,j,takas;


	for(i=0; i<9; i++) {

		for(j=0; j<9-i; j++)  {

				if(dizi[j]%2==0) 		{

					takas=dizi[j];
					dizi[j]=dizi[j+1];
					dizi[j+1]=takas;

										}

		}

	}


	for(i=0; i<10; i++)	{

		printf("|%d|\t",dizi[i]);

	}


}
