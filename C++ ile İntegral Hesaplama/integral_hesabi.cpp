/**
* @author	: Muzaffer Arda Uslu | e-mail -> usluarda58@gmail.com
* @date		: 11 Aralik 2019 Carsamba 17:08
* @brief	: Dikdortgenlere bolme yontemiyle integral hesaplayan kod parcacigi.
*/
#include<iostream>
#include<cmath>
using namespace std;

#define Dx i*h // i ve h degerleri mainin icerisinden aliniyor.
#define altSinir 1
#define ustSinir 2
#define function 8 * pow(altSinir + (Dx), 3) + 4 * pow(altSinir + (Dx), 2) + 4// fonksiyonun kendisi -> 8x^3 + 4x^2 +4
int main()
{
	int n = 1000;// ne kadar cok dikdortgene bolersek o kadar yakin sonuc buluruz! -> n degerinde oynamalar yaparak sonucu gozlemleyin.
	double h = (ustSinir - altSinir) / float(n);// diktortgenlerin geniþligi
	double araToplam = 0, integralSonucu;
	for (int i = 0; i < n; i++)
	{
		araToplam += function;
	}
	integralSonucu = h * araToplam;
	cout << "Sonuc: " << integralSonucu << endl;
	system("pause");
}