#include<iostream>
using namespace std;
int asalMiDegilMi(int);
int main()
{
	int sayi;
	cout << "Sayi girin: ";
	cin >> sayi;
	
	if (asalMiDegilMi(sayi) == 1)
		cout << sayi << " asal degil." << endl;
	else
		cout << sayi << " asaldir" << endl;

	system("pause");
}
int asalMiDegilMi(int sayi)
{
	for (int i = 2; i < sayi; i++)
	{
		if (sayi % i == 0)
		{
			return 1;
		}
		else if (i == sayi)
			return 0;
	}
}