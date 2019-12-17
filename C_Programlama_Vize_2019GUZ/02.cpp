#include<iostream>
#include<time.h>
using namespace std;
int main()
{
	int count;
	int min=100, max = -100;
	double sum = 0;
	int num, lower = -100, upper = 100;
	srand(time(NULL));
	cout << "Sayi giriniz: ";
	cin >> count;
	for (int i = 0; i < count; i++)
	{
		num = (rand() % (upper - lower + 1)) + lower;
		cout << num << " ";
		sum += num;
		if (min > num)
			min = num;
		if (max < num)
			max = num;
	}
	cout << endl << "Minimum: " << min << endl;
	cout << "Maximum: " << max << endl;
	sum /= count;
	cout << "Average: " << sum << endl;
	cout << endl;
	system("pause");

}
