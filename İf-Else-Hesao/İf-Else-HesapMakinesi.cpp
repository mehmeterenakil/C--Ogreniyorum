#include <iostream>

using namespace std;

int main() {
	int sayi1, sayi2, islem, sonuc;

	cout << "1. sayiyi giriniz:";
		cin >> sayi1;
		cout << "2. sayiyi giriniz:";
		cin >> sayi2;

		cout << "Lutfen yapacaginiz islemi seçiniz:(1.+ 2.- 3.* 4./)"; 
			cin >> islem;
		cout << endl;

		if (islem == 1)
		{
			sonuc = sayi1 + sayi2;
		}
		
		else if (islem == 2)
		{
			sonuc = sayi1 - sayi2;
		}
		else if (islem == 3)
		{
			sonuc = sayi1 * sayi2;
		}
		else if (islem == 4)
		{
			sonuc = sayi1 / sayi2;
		}
		else
		{
			cout << "Lutfen islem numaralarindan bir tanesini seciniz!";
		}

		if (sonuc = -1)
		{

		}
		else
		{
			cout << "islemini sonucu : " << sonuc;
		}
			
	return 0;
}