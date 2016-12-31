

#include<stdio.h>

int i,j,b,x;

char a[25][25];

int main(){

	printf("Boyut giriniz : ");

	scanf("%d",&b);

	for(i=0;i<2*b-1;i++){

		for(j=0,x=b-1;j<2*b-1;j++){

			if(i<b){

				if((j>=b-i-1) && (j<=b+i-1) )

					a[i][j]='x';
				else
					a[i][j]=' ';
			} else {

				if((j>=b-x+1) && (j<=b+x+1) )

					a[i][j]='x';
				else
					a[i][j]=' ';
				x--;
			}
			printf("%c ",a[i][j]);
		}
		printf("\n");
	}
}
