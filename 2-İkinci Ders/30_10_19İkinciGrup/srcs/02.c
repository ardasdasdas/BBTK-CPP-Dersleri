/**
*@author	: Muzaffer Arda Uslu | email-> usluarda58@gmail.com
*@date		: 30 Ekim 2019
*			Yeþille yazýlý yerler yorum satýrlarýdýr. Açýklama yapmak için eklenmiþtir, kodunuza bu kýsýmlarý yazmanýza gerek yoktur.
*
*
*@brief		: Ýç içe döngü kullanarak yýldýzlardan içi boþ üçgen þekli bastýran kod parçacýðý.
			*
	-->		* *
			*  *
			* * *
*/
#include<stdio.h>
int main()
{
	int i, j;
	for (i = 0; i <= 5; i++)
	{
		for (j = 0; j <= i; j++)
		{
			if (i == j || j == 0 || i == 5)
				printf("*");
			else
				printf(" ");
		}
		printf("\n");
	}
	system("pause");
}