/**
*@author	: Muzaffer Arda Uslu | email-> usluarda58@gmail.com
*@date		: 23 Ekim 2019
*			Yeþille yazýlý yerler yorum satýrlarýdýr. Açýklama yapmak için eklenmiþtir, kodunuza bu kýsýmlarý yazmanýza gerek yoktur.
*/
/*
		printf()	 scanf_s()||scanf()
	   -----------  --------------------
   int	->  %d				%d	
   float->	%f				%f
   double-> %f				%lf
*/
#include<stdio.h>
int main()
{
	int x;
	printf("x degerini giriniz: ");
	scanf_s("%d", &x);//Scanf() fonksiyonu kullanýcýdan girdi(input) almamýzý saðlar.
	printf("x degeri -> %d\n", x);/*x deðerini ekrana yazzdýrmak için printf() fonksiyonuna virgül yardýmýyla 
								bir parametre daha ekleriz. */
	system("pause");
}