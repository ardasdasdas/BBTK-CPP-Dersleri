#include<iostream>
using namespace std;
int karesi(int);
void yazdir(int, int);
int main() {

	int x = 5, sonuc =0;
	yazdir(sonuc, x);
	system("pause");
}
int karesi(int x)
{
	int sonuc;
	sonuc = x * x;
	return sonuc;
}
void yazdir(int x, int y)
{
	x = karesi(y);
	cout << x << endl;
}
