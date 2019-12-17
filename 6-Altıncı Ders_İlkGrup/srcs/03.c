#include<stdio.h>
//4'e tam bölünen yýllar artýk yýldýr.
//100'e tam bölünen yýllar artýk yýl deðildir.
//400'e tam bölünen yýllar artýk yýldýr.
main() {
	int yil;
	printf("Yil girin: ");
	scanf_s("%d", &yil);
	if (yil % 400 == 0)
	{
		printf("%d artik yildir.", yil);
	}
	else if (yil % 100 == 0)
	{
		printf("%d artik yil degildir.", yil);
	}
	else if (yil % 4 == 0) 
	{
		printf("%d artik yildir.", yil);
	}
	else
	{
		printf("%d artik yil degildir.", yil);
	}
	system("pause");
}