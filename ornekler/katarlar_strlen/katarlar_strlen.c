
#include <stdio.h>
#include <string.h>

int main()	{


	char cumle[25] = {""};

		int karakter_sayisi;

	printf("bir cümle giriniz");

	fgets(cumle, sizeof(cumle), stdin);

	karakter_sayisi=strlen(cumle);

	printf("karakter sayısı : |%d|  ",karakter_sayisi-1);





}
