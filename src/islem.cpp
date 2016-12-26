/**
* @author G�khan �ZKAN(gokozkan89@gmail.com)
*//
#include "islem.h"

islem::islem()
{
	gelenSayi = new string();
	rakam = new sayi();
	liste1 = new BagilListe();
	liste2 = new BagilListe();
	sonuc = new BagilListe();
}
islem::~islem()
{
	delete liste1;
	delete liste2;
	delete sonuc;
	delete gelenSayi;
	delete rakam;
}
void islem::basla(string a, string b)
{
	gelenSayiParcala(a, b);
	cout << "1.Liste :";
	liste1->yazdir();
	cout << endl << endl ;
	cout << "2.liste :";
	liste2->yazdir();
	cout << endl << endl;
	//toplama i�lemi tersten listeledi�i ve ilk elemanlar� toplayamad�g� i�in hatal� i�lem yap�yor.
	toplam();
	cout << "Hatali toplam :";
	sonuc->yazdir();
	cout << endl << endl;
}
void islem::gelenSayiParcala(string a,string b)
{
	//gelen string degerlerini once karakterlere daha sonra ise int de�erlere �eviririz.
	//shortt a zorlama yaparak say� nesnemize uygun hale getiririz.
	char karakter;
	
	for (int i = 0; i < a.length(); i++)
	{
		sayi* yeni = new sayi();
		karakter = a[i];
		int rakam = stoi(&karakter);
		yeni->rakamGir((short)rakam);
		liste1->ekle(yeni);
	
	}
	for (int i = 0; i < b.length(); i++)
	{
		sayi* yeni = new sayi();
		karakter = b[i];
		int rakam = stoi(&karakter);
		yeni->rakamGir((short)rakam);
		liste2->ekle(yeni);
		
	}
	
	
}

// fonksiyonda listelerin son eleamanlar�ndan ba�lanarak toplama i�lemi yap�lmaya �al���lm��t�r.
//Ancak ilk elemanlara gelindi�inde dongu bittigi i�in toplama i�lemi sa�l�kl� olmam��t�r.
void islem::toplam()
{

	int a;
	int b;
	int toplam;
	int kalan;
	int elde = 0;
	do	{
		
		if (liste1->oncekiDugumuGetir() != liste1->basDugumuGetir())
		{
			a = liste1->topla(liste1->oncekiDugumuGetir());
		}
		else if (liste1->oncekiDugumuGetir() == liste1->basDugumuGetir())
			a = liste1->oncekiDugumuGetir()->rakamiGetir();
		if (liste2->oncekiDugumuGetir()!= liste2->basDugumuGetir())
		{
			b = liste2->topla(liste2->oncekiDugumuGetir());
		}
		else if (liste2->oncekiDugumuGetir() == liste2->basDugumuGetir())
			b = liste2->oncekiDugumuGetir()->rakamiGetir();
		toplam = a + b + elde;
		a = b = elde = 0;
		if (toplam >= 10)
		{
			elde = 1;
		}
		kalan = toplam % 10;
		sayi* c = new sayi();
		c->rakamGir(kalan);
		sonuc->ekle(c);
		
	} while (liste1->oncekiDugumuGetir() != liste1->basDugumuGetir() || liste2->oncekiDugumuGetir() != liste2->basDugumuGetir());


}
