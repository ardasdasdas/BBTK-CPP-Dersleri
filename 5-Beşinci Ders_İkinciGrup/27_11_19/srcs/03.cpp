#include<iostream>
using namespace std;
int tekMiCiftMi(int);
int main()
{
	int sayi;
	cout << "Sayi girin: ";
	cin >> sayi;
	if (tekMiCiftMi(sayi) == 3)
		cout << sayi << " cift sayidir" << endl;
	else
		cout << sayi << " tek sayidir" << endl;
	system("pause");
}
int tekMiCiftMi(int sayi)
{
	if (sayi % 2 == 0)
		return 3;
	else
		return 0;
}