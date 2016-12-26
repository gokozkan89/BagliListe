/**
* @author Gökhan ÖZKAN(gokozkan89@gmail.com)
*/

#include "dugum.h"

dugum::dugum()
{
	rakam = new sayi();
}
dugum::dugum(sayi* rakam)
{
	this->rakam = rakam;
	ileri = NULL;
}
dugum::~dugum()
{
	
}
short dugum::rakamiGetir()
{
	return rakam->rakamGetir();
}