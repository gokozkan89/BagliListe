/**
* @author G�khan �ZKAN(gokozkan89@gmail.com)
*/
#include "BagilListe.h"
BagilListe::BagilListe()
{
	
	bas = new dugum();
	son = new dugum();
	onceki = new dugum();
	bas = NULL;  // listede eleman yok ba� ve son s�f�r� g�steriyor.
	son = NULL;
}
BagilListe::~BagilListe()
{
	delete bas;
	delete son;
}

BagilListe::BagilListe(sayi* a) // listeye ilk eleman eklenir.
{
	dugum *p = new dugum(a); // ilk d���m olu�turulur. bu d���m�n verisi a'd�r.
	bas = son = p;   // ilk d���m ve son d���m p'dir.
}

void BagilListe::ekle(sayi* a)
{
	if (bas == NULL) // liste bo� ise
	{
		bas = new dugum(a);  // ba�'a eklenen d���m atan�r.
		son = bas; // ilk d���m ayn� zamanda son d���md�r.
	}
	else // e�er listede d���m var ise
	{
		dugum *yeniDugum = new dugum(a); // yeni d���m olu�turulur. verisi a olur. sonraki ise s�f�r� g�sterir. yani son d���md�r.
		(*son).ileri = yeniDugum;   // �nceden son olan d���m�n sonraki ile i�aret etti�i yer yenid���m olur.
		son = yeniDugum; // son d���m de tabi ki en son eklenen d���m olur.
		onceki = son;            
	}
	
}

void BagilListe::yazdir() // listeyi yazd�r�r.
{
	dugum *temp; // yazd�rma i�lemi i�in ge�ici bi d���m olu�turulur. ba� d���mden itibaren tek tek b�t�n d���mleri dola�acak.
	temp = bas; // yazdirmaya en ba�tan ba�lan�r.

	if (bas != NULL)  // listede eleman varsa                      
	{
		cout << "-";
		while (temp != NULL)  // liste bitene kadar
		{
			cout << (*temp).rakamiGetir() << "-"; // d���mdeki say�y� yazd�r.
			temp = (*temp).ileri;        // sonraki d���me ge�
		}
	}
	
}


short BagilListe::topla(dugum* x)
{
	dugum *temp = NULL;
	
	short a = 0;

	if (bas != NULL)  // e�er liste bo� de�ilse
	{
		temp = bas;  // aramaya ba�tan ba�lanarak ilerlenir.

		while (temp!= x) // liste sonuna kadar VE sayi bulunana kadar 
		{
			onceki = temp; //  silinecek d���mden �nceki d���m�
			temp = (*temp).ileri; //  ve silinecek d���mden sonraki d���m� al.
			
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