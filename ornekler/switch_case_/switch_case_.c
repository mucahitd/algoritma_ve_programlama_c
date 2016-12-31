
#include <stdio.h>

int main()	{

	int not;
	printf("not girin lütfen 1-5 arasında olsun");
	scanf("%d",&not);

	switch(not) {

	case 1: { printf("Çok kötü bir not");	break; }
	case 2: { printf("Daha fazla çalışmalısın");	break; }
	case 3: { printf("ortalama bir not");	break; }
	case 4: { printf("iyilerden olmak yeterli değil en iyi olmalısın");	break; }
	case 5: { printf("Tebrik ederim");	break; }
	default: { printf("geçersiz not"); break; }
	}

}
