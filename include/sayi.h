/**
* @author Gökhan ÖZKAN(gokozkan89@gmail.com)
*/
#ifndef sayi_h
#define sayi_h

#include <iostream>
#include <string>
#include <cstdlib>

using namespace std;
class sayi
{
private:
	short rakam;
public:
	sayi();
	~sayi();
	short rakamGetir();
	void rakamGir(short a);
};
#endif