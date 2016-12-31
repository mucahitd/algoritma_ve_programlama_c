
#include <stdio.h>

	int main()	{


		int sayi,i,enb=0;

		for(i=1; i<=20; i++)	{

			printf("%d nolu sayıyı giriniz..",i);
				scanf("%d",&sayi);

			if(sayi > enb) 			{

				enb=sayi;
									}

								}

		printf("en büyük sayı %d",enb);

	}
