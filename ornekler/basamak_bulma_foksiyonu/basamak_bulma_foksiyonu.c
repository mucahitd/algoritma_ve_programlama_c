

#include <stdio.h>

#include <string.h>

	char sayi[25] = {""};

	int basamak_sayisi;

	int basamak(int basamak_sayisi)	{

	basamak_sayisi=strlen(sayi);

	return basamak_sayisi;

	}

	int main()	{

		printf("bir sayı giriniz");

			fgets(sayi, sizeof(sayi), stdin); // gets yerine fgets kullanmaya çalışın

			basamak_sayisi=strlen(sayi);

			printf("basamak sayısı : |%d|  ",basamak_sayisi-1);
// strlen fonksiyonu sonlandırma karakterinide karakter olarak kabu ettği için -1 //




	}
