

#include <stdio.h>

int main()	{

	int A,saniye,dakika,saat;

	printf("saniye değerini giriniz..");
	scanf("%d",&A);

	if(A<60) {

		saniye=A;
		dakika=0;
		saat=0;
	}

	else if(A<60*60) {

		saniye=A%60;
		dakika=(A-saniye)/60;
		saat=0;
	}

	else {

		saniye=A%60;
	    dakika=((A-saniye)/60)%60;
	    saat=(A-dakika*60-saniye)/(60*60); }


	printf("\n%d:%d:%d",saat,dakika,saniye);



}
