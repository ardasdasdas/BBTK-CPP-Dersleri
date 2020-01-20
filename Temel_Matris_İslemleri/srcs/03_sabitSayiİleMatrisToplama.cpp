/*
* @author	: Muzaffer Arda USLU | e-mail -> usluarda60@icloud.com
* @date		: 20/01/2020
* @brief	: Matris ile sabit sayi toplama.
*/
#include<iostream>
using namespace std;
//Kullanicidan alinan sabit sayi ile matrisi topla.
int main() {

	int Matrix_1[3][3] = { 3,6,9,2,5,8,1,4,7 };
	int sayi;

	cout << "Bir tam sayi giriniz: ";
	cin >> sayi;

	cout << "----------Matrix_1----------" << endl << endl;
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			cout << Matrix_1[i][j] << " ";
		}
		cout << endl;
	}

	for (int i = 0; i < 3; i++)// Toplama islemi
	{
		for (int j = 0; j < 3; j++)
		{
			Matrix_1[i][j] += sayi;
		}
	}

	cout << "----------Toplamadan SONRA Matrix_1----------" << endl << endl;
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			cout << Matrix_1[i][j] << " ";
		}
		cout << endl;
	}

	system("pause");
}
