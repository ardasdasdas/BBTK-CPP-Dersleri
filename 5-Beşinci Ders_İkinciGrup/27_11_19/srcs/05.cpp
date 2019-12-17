#include<iostream>
using namespace std;
int main()
{
	int Arda[3], Orhan[3], Gokhan[3];
	cout << "Arda dizisini giriniz: ";
	for (int i = 2; i >= 0; i--)
		cin >> Arda[i];
	cout << "Orhan dizisini giriniz: ";
	for (int i = 0; i < 3; i++)
		cin >> Orhan[i];
	for (int i = 0; i < 3; i++)
		Gokhan[i] = Arda[i] + Orhan[i];
	cout << "Arda ile Orhan'in toplami -> " << endl;
	for (int i = 0; i < 3; i++)
		cout << Gokhan[i] << " ";



	system("pause");
}