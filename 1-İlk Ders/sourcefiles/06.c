/**
*@author	: Muzaffer Arda Uslu | email-> usluarda58@gmail.com
*@date		: 23 Ekim 2019
*			Yeþille yazýlý yerler yorum satýrlarýdýr. Açýklama yapmak için eklenmiþtir, kodunuza bu kýsýmlarý yazmanýza gerek yoktur.
*/
/*
	Bu kodda ilk farklýlýk olarak math.h kütüphanesi eklendi.
				KÜTÜPHANE ÝÇÝNDEKÝ FONKSÝYONLAR
			---------------------------------------
				pow() -> herhangi bir sayýnýn istediðimiz deðerdeki üssünü almamýzý saðlar. Ýçine iki parametre alýr.
				sqrt() -> herhangi bir sayýnýn karekökünü almamýzý saðlar. Tek parametre alýr, ayný iþlem pow ile de saðlanabilir.
				abs() -> herhangi bir sayýnýn mutlak deðerini almamýzý saðlar. Tek parametre alýr.
				ceil() -> herhangi bir kesirli sayýyý bir KÜÇÜK tam sayýsýna yuvarlar. Tek parametre alýr.
				floor() -> herhangi bir kesirli sayýyý bir BÜYÜK tam sayýsýna yuvarlar. Tek parametre alýr.
*/
#include<stdio.h>
#include<math.h>
int main()
{
	int x = 5, y = 3, z = -7, t = 16, sonuc;
	float q = 2.85;

	sonuc = pow(3, 4);// 3 üssü 4'ün gösterimidir.
	printf("%d\n", sonuc);//Çýktý olarak 81 verir.

	sonuc = pow(x, 2);// x üssü 2'nin gösterimidir.
	printf("%d\n", sonuc);//Çýktý olarak 25 verir.

	sonuc = pow(x, y);// x üssü y'nin gösterimidir.
	printf("%d\n", sonuc);//Çýktý olarak 125 verir.

	sonuc = sqrt(64);// kök 64'ün gösterimidir.
	printf("%d\n", sonuc);//Çýktý olarak 8 verir.

	sonuc = sqrt(t);// kök t'nin gösterimidir.
	printf("%d\n", sonuc);//Çýktý olarak 4 verir.

	sonuc = abs(z);// |z|'nin gösterimidir.
	printf("%d\n", sonuc);//Çýktý olarak 7 verir.

	sonuc = ceil(q);// q sayýsýný bir büyük tam sayýsýna yuvarlar.
	printf("%d\n", sonuc);//Çýktý olarak 3 verir

	sonuc = floor(q);// q sayýsýný bir küçük tam sayýsýna yuvarlar.
	printf("%d\n", sonuc);//Çýktý olarak 2 verir


	system("pause");
}