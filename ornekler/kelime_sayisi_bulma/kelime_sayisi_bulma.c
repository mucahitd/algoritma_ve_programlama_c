

#include<stdio.h>

int main()	{

	char metin[100];
	printf("bir metin giriniz..");
	fgets(metin, sizeof(metin), stdin);

	int kelimesayisi=1;

	for(int i=0; metin[i]!='\0'; i++) {

		if(metin[i]==' ') {

			kelimesayisi++;
							}
	}

	printf("kelime sayısı : %d",kelimesayisi);
}
