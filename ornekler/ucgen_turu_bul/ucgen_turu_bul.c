
#include <stdio.h>

int main()	{

	int kenar1,kenar2,kenar3;

	printf("1. kenarı giriniz..");

		scanf("%d",&kenar1);

	printf("2. kenarı giriniz..");

		scanf("%d",&kenar2);

	printf("3.kenarı giriniz..");

		scanf("%d",&kenar3);

		if(kenar1==kenar2==kenar3) {

			printf("Bu üçgen bir eşkenar üçgendir");
		}

		else if(kenar1==kenar2 || kenar2==kenar3 || kenar1==kenar3)	{

			printf("Bu üçgen bir ikizkenar üçgendir");
		}

		else printf("Bu üçgen bir çeşitkenar üçgendir");
}
