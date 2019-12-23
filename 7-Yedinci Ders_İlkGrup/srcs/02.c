#include<stdio.h>
int main() {

	int i = 1, ciftSayilar = 0;
	while (i < 101) {

		if (i % 2 == 0)
		{
			printf("%d\n", i);
			ciftSayilar++; // ciftSayilar = ciftSayilar +1
		}
		i++;
	}
	printf("%d kadar cift sayi var.", ciftSayilar);

	system("pause");
}