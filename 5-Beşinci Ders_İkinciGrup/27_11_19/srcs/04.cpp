#include<iostream>
using namespace std;
int y(int);
int main()
{
	int n;
	cout << "21'den kucuk tam sayi girin:";
	cin >> n;
	for (int i = 0; i < n; i++)
		cout << i+1 << ". Sonuc-> " << y(i) << endl;
	system("pause");
}
int y(int n)
{
	if (n >= 2 && n <= 20)
		return 3 * y(n - 2) - y(n - 1);
	else if (n == 0)
		return 5;
	else if (n == 1)
		return 3;
}