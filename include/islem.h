/**
* @author Gökhan ÖZKAN(gokozkan89@gmail.com)
*/
#ifndef islem_h
#define islem_h
#include "BagilListe.h"
class islem
{
private:
	string* gelenSayi;
	sayi* rakam;
	BagilListe* liste1;
	BagilListe* liste2;
	BagilListe* sonuc;
	void gelenSayiParcala(string a, string b);
	void sayilariListeyeAt();
	void toplam();
public:
	islem();
	~islem();
	string gelenSayiGetir();
	void gelenSayiGir(string s);
	void basla(string a, string b);


};
#endif