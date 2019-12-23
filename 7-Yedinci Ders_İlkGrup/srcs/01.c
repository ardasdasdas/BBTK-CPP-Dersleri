#include<stdio.h>
int main() {

	int sinir, sonuc = 1;
	printf("Sayi girin:");
	scanf_s("%d", &sinir);

	for (int i = 1; i <= sinir; i++) {
		sonuc *= i; // sonuc = sonuc * i 
	}

	printf("Sonuc -> %d\n", sonuc);

	system("pause");
}