

#include <stdio.h>


int main()	{

	int parola=5555;
	int denenen,i;

	for(i=1; i<=3; i++)	{

	printf("Parola 1000-9999 arasında. Bakalım bulabilecek misin? ");
	scanf("%d",&denenen);

	if(denenen < 1000 || denenen > 9999)	{

		printf("parola 1000-9999 arasında değil.."); i--;

											}

	else if(denenen==parola)				{

		printf("hoşgeldiniz.."); break;
											}

						}


}
