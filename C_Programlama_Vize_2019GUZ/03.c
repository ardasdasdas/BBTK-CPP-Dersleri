#include<stdio.h>
int main() {
	int yukseklik, bosluk;
	printf("Yukseklik girin: ");
	scanf_s("%d", &yukseklik);
	bosluk = 0;
	int temp = 0;
	temp = yukseklik*yukseklik;
	for (int i = yukseklik; i > 0; i--)
	{
		for (int j = 0; j < bosluk; j++)
			printf("   ");
		for (int j = 0; j < 2 * i - 1; j++)
		{
			printf("%3d", temp);
			temp--;
		}
		printf("\n");
		bosluk++;
		
	}
	printf("\n");
	system("pause");
}