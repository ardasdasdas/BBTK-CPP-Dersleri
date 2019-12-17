#include<iostream>
using namespace std;
int main()
{
	int C[10];
	for (int i = 5; i < 10; i++)
	{
		cout << "Sayi gir: ";
		cin >> C[i];
	}
	for (int i = 0; i < 10; i++)
	{
		cout << C[i] << " ";
	}
	system("pause");
}