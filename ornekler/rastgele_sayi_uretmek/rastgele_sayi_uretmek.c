/*
 ============================================================================
 Name        : rastgele_sayi_uretmek.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */


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
