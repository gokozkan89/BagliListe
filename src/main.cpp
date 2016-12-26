/**
* @author Gökhan ÖZKAN(gokozkan89@gmail.com)
*/
#include "islem.h"

int main()
{
	string* sayi1 =new string();
	string* sayi2 = new string();;
	islem* deger = new islem();
	

	cout << "1. Sayiyi Giriniz :";
	cin >> *sayi1;
	cout << endl;
	
	cout << "2. Sayiyi Giriniz :";
	cin >> *sayi2;
	cout << endl;
	deger->basla(*sayi1, *sayi2);
	delete sayi1;
	delete sayi2;
	delete deger;
	system("PAUSE");
	return 0;
}