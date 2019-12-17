#include<stdio.h>
main() {
	
	int sayi;
	printf("Bir sayi girin: ");
	scanf_s("%d", &sayi);
	if (sayi % 2 != 1)
	{
		printf("%d bir cift sayidir.", sayi);
	}
	else
		printf("%d bir tek sayidir.", sayi);

	system("pause");
}