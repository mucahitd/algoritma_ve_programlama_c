

#include <stdio.h>

int main()	{


	int dizi[]={4,8,3,1,18,9,21,20,5,11},i,j;

	for(i=0; i<10; i++)	{


		for(j=1; j<=dizi[i]; j++) {

			printf("|%d|\t",dizi[i]);

		}

		printf("\n");

	}
}
