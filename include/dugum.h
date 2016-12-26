/**
* @author Gökhan ÖZKAN(gokozkan89@gmail.com)
*/
#ifndef dugum_h
#define dugum_h
#include "sayi.h"
class dugum
{
private:
	sayi* rakam;
	
public:
	dugum* ileri;
	dugum();
	dugum(sayi* rakam);	~dugum();	short rakamiGetir();
};
#endif