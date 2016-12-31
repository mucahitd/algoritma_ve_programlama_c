

#include <stdio.h>


int main()	{

	int toplam,sayi,onluk,birlik;

	printf("iki basamaklı bi sayı giriniz..");

	scanf("%d",&sayi);

	onluk=sayi/10;
	birlik=sayi%10;
	toplam=onluk+birlik;

	printf("%d",toplam);

}
