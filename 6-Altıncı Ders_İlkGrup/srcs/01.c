#include<stdio.h>
main() {
	char ch;
	printf("Bir karakter giriniz: ");
	scanf_s(" %c", &ch);
	//Ascii tablosunda KARAKTER olan a'nýn decimal karþýlýðý -> 97
	if (ch == 97 || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
	{
		printf("%c bir sesli harftir.", ch);
	}
	else 
	{
		printf("%c bir sesli harf degildir.", ch);
	}
	system("pause");
}