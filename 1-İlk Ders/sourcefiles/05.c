/**
*@author	: Muzaffer Arda Uslu | email-> usluarda58@gmail.com
*@date		: 23 Ekim 2019
*			Yeþille yazýlý yerler yorum satýrlarýdýr. Açýklama yapmak için eklenmiþtir, kodunuza bu kýsýmlarý yazmanýza gerek yoktur.
*/
/*
		x + y -> toplama iþlemi.
		x - y -> çýkarma iþlemi.
		x / y -> bölme iþlemi.
		x * y -> çarpma iþlemi.
		x % y -> modül iþlemi.
*/
#include<stdio.h>
int main()
{
	int x = 5, y = 6, z = 7, t = 8, sonuc;

	sonuc = x + y;//Saðda yapýlan iþlem soldaki sonuc deðiþkenine atandý.
	printf("%d\n", sonuc);

	sonuc = y - z;//Saðda yapýlan iþlem soldaki sonuc deðiþkenine atandý.
	printf("%d\n", sonuc);

	sonuc = t / 2;//Saðda yapýlan iþlem soldaki sonuc deðiþkenine atandý.
	printf("%d\n", sonuc);

	sonuc = z * t;//Saðda yapýlan iþlem soldaki sonuc deðiþkenine atandý.
	printf("%d\n", sonuc);

	sonuc = t % y;//Saðda yapýlan iþlem soldaki sonuc deðiþkenine atandý. En son hafýzada, program çalýþtýðý sürece, t % y (yani 2) kaldý.
	printf("%d\n", sonuc);

	system("pause");
}