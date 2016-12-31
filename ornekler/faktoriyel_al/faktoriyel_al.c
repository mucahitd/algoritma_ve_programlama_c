/*
 ============================================================================
 Name        : faktoriyel_al.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>

int main()	{

	int n,i,faktoriyel=1;

	printf("faktöriyeli alınacak sayıyı giriniz..");
	scanf("%d",&n);

	for(i=1; i<=n; i++)       {

	faktoriyel=faktoriyel*i;  }

	printf(" %d sayısının faktöriyeli %d olur",n,faktoriyel);

}
