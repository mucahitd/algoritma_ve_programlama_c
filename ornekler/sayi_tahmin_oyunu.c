#include <stdio.h>
#include<stdlib.h>
#include<time.h>

int main()	{

srand(time(NULL));

int random= rand()  % 100+1;
int denenen;

printf("Sayi tahmin oyununa hosgeldiniz. Sistem 1 ile 100 arasında bir sayı tuttu. Lütfen tahmininizi giriniz");
	scanf("%d",&denenen);
while(denenen!=random)	
{

  if(denenen < 0|| denenen > 100)	
{

		printf("Lütfen 1 ile 100 arasinda bir sayi giriniz");
                 scanf("%d",&denenen);
  }

	if (denenen>random)
{
    printf("lutfen daha kucuk bir sayi giriniz: "); 
    scanf("%d",&denenen);

}
   if (denenen<random)
{
        printf("lutfen daha buyuk bir sayi giriniz: "); 
        scanf("%d",&denenen);

}										

	if(denenen==random)				
{

		printf("tebrikler"); 
                break;
}

}


}
