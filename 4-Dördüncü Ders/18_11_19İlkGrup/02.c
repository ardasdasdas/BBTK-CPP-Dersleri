#include<stdio.h>
main() {
	
	int sayi1, sayi2, sayi3, sayi4, sonuc;
	sayi1 = 35;
	sayi2 = 45;
	sayi3 = 3;
	sayi4 = 10;
	sonuc = sayi2 * sayi4;
	printf("sonuc: %d\n", sonuc);

	sonuc = sayi1 % sayi4;
	printf("sonuc: %d\n", sonuc);

	sonuc = sayi1 / sayi2;
	printf("sonuc: %d\n", sonuc);


	system("pause");
}