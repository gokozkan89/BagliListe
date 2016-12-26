/**
* @author Gökhan ÖZKAN(gokozkan89@gmail.com)
*/
#include "BagilListe.h"
BagilListe::BagilListe()
{
	
	bas = new dugum();
	son = new dugum();
	onceki = new dugum();
	bas = NULL;  // listede eleman yok baþ ve son sýfýrý gösteriyor.
	son = NULL;
}
BagilListe::~BagilListe()
{
	delete bas;
	delete son;
}

BagilListe::BagilListe(sayi* a) // listeye ilk eleman eklenir.
{
	dugum *p = new dugum(a); // ilk düðüm oluþturulur. bu düðümün verisi a'dýr.
	bas = son = p;   // ilk düðüm ve son düðüm p'dir.
}

void BagilListe::ekle(sayi* a)
{
	if (bas == NULL) // liste boþ ise
	{
		bas = new dugum(a);  // baþ'a eklenen düðüm atanýr.
		son = bas; // ilk düðüm ayný zamanda son düðümdür.
	}
	else // eðer listede düðüm var ise
	{
		dugum *yeniDugum = new dugum(a); // yeni düðüm oluþturulur. verisi a olur. sonraki ise sýfýrý gösterir. yani son düðümdür.
		(*son).ileri = yeniDugum;   // önceden son olan düðümün sonraki ile iþaret ettiði yer yenidüðüm olur.
		son = yeniDugum; // son düðüm de tabi ki en son eklenen düðüm olur.
		onceki = son;            
	}
	
}

void BagilListe::yazdir() // listeyi yazdýrýr.
{
	dugum *temp; // yazdýrma iþlemi için geçici bi düðüm oluþturulur. baþ düðümden itibaren tek tek bütün düðümleri dolaþacak.
	temp = bas; // yazdirmaya en baþtan baþlanýr.

	if (bas != NULL)  // listede eleman varsa                      
	{
		cout << "-";
		while (temp != NULL)  // liste bitene kadar
		{
			cout << (*temp).rakamiGetir() << "-"; // düðümdeki sayýyý yazdýr.
			temp = (*temp).ileri;        // sonraki düðüme geç
		}
	}
	
}


short BagilListe::topla(dugum* x)
{
	dugum *temp = NULL;
	
	short a = 0;

	if (bas != NULL)  // eðer liste boþ deðilse
	{
		temp = bas;  // aramaya baþtan baþlanarak ilerlenir.

		while (temp!= x) // liste sonuna kadar VE sayi bulunana kadar 
		{
			onceki = temp; //  silinecek düðümden önceki düðümü
			temp = (*temp).ileri; //  ve silinecek düðümden sonraki düðümü al.
			
		}
		a = temp->rakamiGetir();
	}
	return a;
}
dugum* BagilListe::basDugumuGetir()
{  
	return bas;
}
dugum* BagilListe::sonDugumuGetir()
{ 
	return son;
}
dugum* BagilListe::oncekiDugumuGetir()
{
	return onceki;
}