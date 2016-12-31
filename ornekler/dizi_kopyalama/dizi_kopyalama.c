

#include <stdio.h>

int main()	{

	int dizi1[10]={4,8,3,1,18,9,21,20,5,17};
	int dizi2[10];
	int i;
	for(i=0; i<10; i++)	{

		dizi2[i]=dizi1[i];
						}

	for(i=0; i<10; i++)	{

		printf("|%d|\t",dizi2[i]);

	}


}
