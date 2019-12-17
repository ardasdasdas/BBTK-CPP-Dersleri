#include<iostream>
using namespace std;
int faktoriyel(int);
int main() {
	int sonuc;
	sonuc = faktoriyel(5);
	cout << sonuc << endl;
	sonuc = faktoriyel(10);
	cout << sonuc << endl;
	sonuc = faktoriyel(7);
	cout << sonuc << endl;
	sonuc = faktoriyel(20);
	cout << sonuc << endl;

	system("pause");
}
int faktoriyel(int sayi)
{
	int temp = 1;
	for (int i = 1; i <= sayi; i++)
	{
		temp *= i;
	}
	return temp;
}
