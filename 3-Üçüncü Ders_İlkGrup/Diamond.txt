#include<iostream>
using namespace std;
int main()
{
	int n, bosluk;
	cout << "yukseklik gir: ";
	cin >> n;
	bosluk = n - 1;
	for (int i = 1; i <= n; i++)
	{
		for (int j = 0; j < bosluk; j++)
		{
			cout << " ";
		}
		bosluk--;
		for (int j = 0; j < i * 2 - 1; j++)
			cout << "*";
		cout << endl;
	}
	bosluk = 1;
	for (int i = n - 1; i > 0; i--)
	{
		for (int j = 0; j < bosluk; j++)
		{
			cout << " ";
		}
		bosluk++;
		for (int j = 0; j < i * 2 - 1; j++)
			cout << "*";
		cout << endl;
	}

	system("pause");
}