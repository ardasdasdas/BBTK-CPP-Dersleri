#include<iostream>
using namespace std;
void yildizBastirma(int);
int main() {
	int yukseklik;
	cout << "Yukseklik girin: ";
	cin >> yukseklik;
	yildizBastirma(yukseklik);
	system("pause");
}
void yildizBastirma(int yukseklik)
{
	for (int i = 0; i < yukseklik; i++)
	{
		for (int j = 0; j <= i; j++)
		{
			cout << "*";
		}
		cout << endl;
	}
}
