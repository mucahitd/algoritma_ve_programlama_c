


#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main() {

int a=1,sayi;

srand(time(NULL));

while(a<=10){

sayi=rand()%25;

printf("\n%d. sayi=%d",a,sayi);
a++; }


}
