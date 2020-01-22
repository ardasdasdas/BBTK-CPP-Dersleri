#include<stdio.h>
#include<math.h>
int main()
{
	int sayi, basamakSayisi = 0, bosEleman;

	printf("Sayi girin: ");
	scanf_s("%d", &sayi);

	bosEleman = sayi;

	while (bosEleman > 0)
	{
		bosEleman /= 10;
		basamakSayisi++;
	}
	int x;
	for (int i = basamakSayisi; i > 0; i--)
	{
		x = sayi / pow(10, (i - 1));
		for (int j = 0; j < x; j++)
		{
			printf("*");
		}
		sayi = sayi % (int)pow(10, (i - 1));

		printf("\n");
	}
	system("pause");	
}
