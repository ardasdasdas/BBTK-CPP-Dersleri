#include<stdio.h>
main() {
	int deger1, deger2, deger3;
	printf("Ilk degeri girin: ");
	scanf_s("%d", &deger1);
	printf("Ikinci degeri girin: ");
	scanf_s("%d", &deger2);
	printf("Ucuncu degeri girin: ");
	scanf_s("%d", &deger3);
	if (deger1 == deger2)
	{
		printf("deger1 ile deger2 esittir.\n");
	}
	else
	{
		printf("deger1 ile deger2 esit degildir.\n");
	}
	if (deger1 == deger3)
	{
		printf("deger1 ile deger3 esittir.\n");
	}
	else
	{
		printf("deger1 ile deger3 esit degildir.\n");
	}
	system("pause");
}