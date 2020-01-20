/*
* @author	: Muzaffer Arda USLU | e-mail -> usluarda60@icloud.com
* @date		: 20/01/2020
* @brief	: Ters(transpose) Matris.
*/
#include<iostream>
using namespace std;
//Kullanicidan matris elemanlarini al ve alinan matirisin ters(transpose) halini baska bir matrise ata ardindan iki matrisi de ekrana yazdir.
//Transpose Matris -> Satirlarin ve sutunlarin yer degistirmis hali.
#define size 3// sadece bu sayiyi degistirerek matris boyutunu belirleyin
int main() {

	int Matrix_1[size][size];
	int transposeMatrix_1[size][size];	

	cout << "Matris elemanlarini girin:" << endl;
	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size; j++)
		{
			cin >> Matrix_1[i][j];
		}
	}
	cout << "----------Matrix_1----------" << endl << endl;
	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size; j++)
		{
			cout << Matrix_1[i][j] << " ";
		}
		cout << endl;
	}

	for (int i = 0; i < size; i++)// Transpose islemi
	{
		for (int j = 0; j < size; j++)
		{
			transposeMatrix_1[j][i] = Matrix_1[i][j];
		}
	}

	cout << "----------transposeMatrix_1----------" << endl << endl;
	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size; j++)
		{
			cout << transposeMatrix_1[i][j] << " ";
		}
		cout << endl;
	}
	system("pause");
}
