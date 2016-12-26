/**
* @author G�khan �ZKAN(gokozkan89@gmail.com)
*/
#ifndef BagilListe_h
#define BagilListe_h
#include "dugum.h"
class BagilListe
{
private:
	dugum *bas; // listedeki ilk d���m�n adresini tutar. b�t�n eri�imler bu de�i�ken ile ba�lar.
	dugum *son; // son d���m�n adresini tutar.
	dugum *onceki;
public:	
	BagilListe();
	~BagilListe();
	BagilListe(sayi* a); // listeye ilk eleman eklenir.
	dugum* basDugumuGetir();
	dugum* sonDugumuGetir();
	dugum* oncekiDugumuGetir();
	void ekle(sayi* a);
	void yazdir(); // listeyi yazd�r�r
	short topla(dugum* x);


};
#endif