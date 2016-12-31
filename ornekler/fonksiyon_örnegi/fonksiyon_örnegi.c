

#include <stdio.h>


int topla(int, int);

	int main()	{

	int toplam,a,b;

	printf("toplanmalarını istediğiniz 2 adet sayı giriniz..");
	scanf("%d %d",&a,&b);

	toplam=topla(a,b);


	printf("%d ve %d toplamı %d ",a,b,toplam);

	return 0;

}

	int topla(int x, int y) {

		int sonuc;

		sonuc=x+y;

		return sonuc;

	}

