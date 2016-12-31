

#include <stdio.h>
int main()	{
	int sayi;
	printf("negatif bir sayı giriniz..");
	scanf("%d",&sayi);

	if(sayi<0) {

		sayi=sayi*-1;
	}

	printf("pozitif oldu %d",sayi);
}
