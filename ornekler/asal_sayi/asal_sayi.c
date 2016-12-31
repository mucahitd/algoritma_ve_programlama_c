
#include <stdio.h>

int main(){

    int adet, i, j;
    int kontrol=0, sayac=0;

    printf("Sayıyı giriniz");
    scanf("%d", &adet);
// 2'den küçük asal sayı olmadığı için girilen adeti kontrol ediyoruz.
    if(adet < 2)
        printf("Asal Sayi Bulunamadi!!!");

    else{

        for(i=2; i<=adet; i++){

            kontrol = 0;    // Kontrol değerinin varsayılan değeri 0 olarak ata

            for(j=2; j<=i/2; j++){

                if( i % j == 0){
                    kontrol = 1;    // Kendisinden başka bir sayıya bölünüyorsa kontrol değişkenini 1 yap
                    break;
                }
            }
            if(kontrol == 0){    // Kontrol değişkeni değişmedi ise sayı hiçbir sayıya bölünmemiştir yani asaldır
                printf("%d\n", i);
                sayac++;            // Toplam kaç adet asal sayı bulunduğunu sayıyoruz
            }

        }

        printf("Toplam %d tane asal sayi bulunmustur!", sayac);
    }



}
