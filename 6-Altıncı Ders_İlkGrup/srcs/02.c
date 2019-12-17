#include<stdio.h>
main() {
	int sayi = 26;

	if (sayi % 2 != 0)
	{
		printf("Sevval\n");
	}
	else if (sayi > 30)
	{
		printf("Sinan", sayi);
	}
	else if (sayi == 25)
	{
		printf("Avni", sayi);
	}
	else
		printf("Goknur");

	system("pause");
}