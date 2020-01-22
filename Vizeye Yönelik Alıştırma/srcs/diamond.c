#include<stdio.h>
int main()
{
	int yukseklik, bosluk;
	printf("Yukseklik girin: ");
	scanf_s("%d", &yukseklik);
	bosluk = yukseklik - 1;
	for (int i = 0; i < yukseklik; i++)
	{
		for (int j = 0; j < bosluk; j++)
		{
			printf(" ");
		}
		bosluk--;
		for (int j = 0; j < 2 * (i + 1) - 1; j++)
			printf("*");
		printf("\n");
	}
	bosluk = 1;
	for (int i = yukseklik; i > 0; i--)
	{ 
		for (int j = 0; j < bosluk; j++)
			printf(" ");
		bosluk++;
		for (int j = 0; j < 2 * (i - 1) -1; j++)
			printf("*");
		printf("\n");
	}


	system("pause");
}
