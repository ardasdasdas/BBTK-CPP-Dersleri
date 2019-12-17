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
	int x = 10;//int'e tanýmlý deðiþkenleri, hafýzada tam sayý olarak tutar.
	float y = 8.98;//float'a tanýmlý deðiþkenleri, hafýzada kesirli sayý olarak tutar.
	double z = 2.58;/*doubla'a tanýmlý deðiþkenleri, hafýzada kesirli sayý olarak tutar. Float'tan farký virgülden sonra daha büyük sayýlarý tutabilir.
					RAM'i þiþirmemek amacýyla ihtiyaç duyulduðunda kullanýlmasý önerilir.*/	
	char t = 'A';//char'a tanýmlý deðiþkenleri, hafýzada BÝR KARAKTER olarak tutar.
	printf("%d, %f, %f, %c\n", x, y, z, t);//Ekrana BENÝM ÝSTEDÝÐÝM SIRAYA baðlý kalarak x, y, z ve t deðerlerini bastýrýr.

	system("pause");
}