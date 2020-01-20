/*
* @author	: Muzaffer Arda USLU | e-mail -> usluarda60@icloud.com
* @date		: 20/01/2020
* @brief	: Matris tanimlama.
			Tek boyutlu dizilere VEKTOR(int A[]), cok boyutlu dizilere ise MATRIS(int A[][]) adi verilir.
*/
#include<iostream>
using namespace std;
//Iki farkli matirs taiýmla. Satir ve sutunlari belli olacak sekilde ekrana yazdir.

int main() {

	int Matrix_1[3][3] = { 3,6,9,2,5,8,1,4,7 };//On tanimli matris
	int Matrix_2[3][3] = { 4,7,0,
						   3,6,9,
						   2,5,8 };
	cout << "----------Matrix_1----------" << endl << endl;
	for (int i = 0; i < 3/*satir sayisi*/; i++)
	{
		for (int j = 0; j < 3/*sutun sayisi*/; j++)
		{
			cout << Matrix_1[i][j] << " ";
		}
		cout << endl;//matris gorunumu olusturmak icin her satirda alt satira gecis 
	}
	cout << "----------Matrix_2----------" << endl << endl;
	for (int i = 0; i < 3/*satir sayisi*/; i++)
	{
		for (int j = 0; j < 3/*sutun sayisi*/; j++)
		{
			cout << Matrix_2[i][j] << " ";
		}
		cout << endl;//matris gorunumu olusturmak icin her satirda alt satira gecis 
	}
	system("pause");
}
