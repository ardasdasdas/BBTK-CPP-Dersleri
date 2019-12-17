#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int i = 1, tekCift=0;
	double toplam = 0;
	while (i <= 201)
	{
		if (tekCift % 2 == 0)
			toplam += sqrt(i);
		if (tekCift % 2 == 1)
			toplam -= sqrt(i);
		i += 2;
		tekCift++;
	}
	cout << "Result is: " << toplam << endl;
	


	system("pause");
}