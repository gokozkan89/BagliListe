/**
* @author Gökhan ÖZKAN(gokozkan89@gmail.com)
*/
#ifndef BagilListe_h
#define BagilListe_h
#include "dugum.h"
class BagilListe
{
private:
	dugum *bas; // listedeki ilk düðümün adresini tutar. bütün eriþimler bu deðiþken ile baþlar.
	dugum *son; // son düðümün adresini tutar.
	dugum *onceki;
public:	
	BagilListe();
	~BagilListe();
	BagilListe(sayi* a); // listeye ilk eleman eklenir.
	dugum* basDugumuGetir();
	dugum* sonDugumuGetir();
	dugum* oncekiDugumuGetir();
	void ekle(sayi* a);
	void yazdir(); // listeyi yazdýrýr
	short topla(dugum* x);


};
#endif