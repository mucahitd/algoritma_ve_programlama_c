

#include<stdio.h>

int a[5]={11,2,9,3,5},i,j,t,boyut=5;

int main()	{

	for(i=0;i<boyut-1;i++){

		for(j=0;j<boyut-i-1;j++)	{

			if(a[j]>a[j+1]){

				t=a[j];

				a[j]=a[j+1];

				a[j+1]=t;
									}
			printf(" %d",a[j]);
									}
		printf("\n");
									}
	for(i=0;i<boyut;i++){
		printf("%d \t",a[i]);
									}
		}
