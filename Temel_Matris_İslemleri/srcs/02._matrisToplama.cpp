/*
* @author	: Muzaffer Arda USLU | e-mail -> usluarda60@icloud.com
* @date		: 20/01/2020
* @brief	: Iki matrisi toplama ve cikarma islemi.
*/
#include<iostream>
using namespace std;
//Iki farkli matris tanimla ucuncu bir matrise toplamlarini ata, daha sorna ilk matristen ikinci matrisi cikar.
int main() {

	int Matrix_1[3][3] = { 3,6,9,2,5,8,1,4,7 };
	int Matrix_2[3][3] = { 4,7,0,
						   3,6,9,
						   2,5,8 };
	int Matrix_3[3][3];

	cout << "----------Matrix_1----------" << endl << endl;
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			cout << Matrix_1[i][j] << " ";
		}
		cout << endl;
	}

	cout << "----------Matrix_2----------" << endl << endl;
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			cout << Matrix_2[i][j] << " ";
		}
		cout << endl;
	}

	cout << endl << "----------Toplama isleminden ONCE Matrix_3----------" << endl << endl;
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			cout << Matrix_3[i][j] << " ";
		}
		cout << endl;
	}
	
	for (int i = 0; i < 3; i++)// Toplama islemi
	{
		for (int j = 0; j < 3; j++)
		{
			Matrix_3[i][j] = Matrix_1[i][j] + Matrix_2[i][j];
		}
	}

	cout << endl << "----------Toplama isleminden SONRA Matrix_3----------" << endl << endl;
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			cout << Matrix_3[i][j] << " ";
		}
		cout << endl;
	}

	for (int i = 0; i < 3; i++)// Cikarma islemi
	{
		for (int j = 0; j < 3; j++)
		{
			Matrix_1[i][j] -= Matrix_2[i][j];//Matrix_1[i][j] = Matrix_1[i][j] - Matrix_2[i][j];
		}
	}

	cout << endl << "----------Cikarma isleminden SONRA Matrix_1----------" << endl << endl;
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
