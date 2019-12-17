#include<iostream>
using namespace std;
void faktoriyel(int);
int main() {

	faktoriyel(5);
	faktoriyel(8);
	//int sonuc = faktoriyel(5) + faktoriyel(9); -> yanlýþ iþlem
	system("pause");
}
void faktoriyel(int sayi)
{
	int temp = 1;
	for (int i = 1; i <= sayi; i++)
	{
		temp *= i;
	}
	cout << temp << endl;
}
