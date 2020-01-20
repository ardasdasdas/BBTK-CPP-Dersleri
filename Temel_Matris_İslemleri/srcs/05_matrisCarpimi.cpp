/*
* @author	: Muzaffer Arda USLU | e-mail -> usluarda60@icloud.com
* @date		: 20/01/2020
* @brief	: Matrisler carpimi.
*/
#include<iostream>
using namespace std;
//Iki matrisi carpýp ucuncu bir matrise esitleyin
//Kural 1: Ilk matrisin satir sayisi ikinci matrisin sutun sayisina esit olmali.
//Kural 2: Carpim sonrasi olusan matrisin satir sayisi ilk matrisin satir sayisi, sutun sayisi ise ikinci matrisin sutun sayisi olur.

int main() {

	int Matrix_1[3][2], Matrix_2[2][4];
	int matrislerCarpimi[3][4];
	int araToplam = 0;

	cout << "Matrix_1 elemanlarini girin:" << endl;
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 2; j++)
		{
			cin >> Matrix_1[i][j];
		}
	}

	cout << "Matrix_2 elemanlarini girin:" << endl;
	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			cin >> Matrix_2[i][j];
		}
	}
	cout << "----------Matrix_1----------" << endl << endl;
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 2; j++)
		{
			cout << Matrix_1[i][j] << " ";
		}
		cout << endl;
	}

	cout << "----------Matrix_2----------" << endl << endl;
	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			cout << Matrix_2[i][j] << " ";
		}
		cout << endl;
	}
	for (int i = 0; i < 3/*ilk matrisin satir sayisi*/; i++)
	{
		for (int j = 0; j < 4/*ikinci matrisin sutun sayisi*/; j++)
		{
			for (int k = 0; k < 2/*matrix_1'in sutun, matrix_2'nin satir sayisi*/; k++)
			{
				araToplam += Matrix_1[i][k] * Matrix_2[k][j];
			}
			matrislerCarpimi[i][j] = araToplam;
			araToplam = 0;
		}
	}
	cout << "----------mattislerCarpimi----------" << endl << endl;
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			cout << matrislerCarpimi[i][j] << " ";
		}
		cout << endl;
	}


	system("pause");
}
