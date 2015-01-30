
#ifndef TARIH_H_INCLUDED
#define TARIH_H_INCLUDED

#include <iostream>
using namespace std;
using std::istream;
using std::ostream;

class Tarih
{
private:
    int gun;
    int ay;
    int yil;

public:

    Tarih(int=1,int=1,int=1900);

    void gunAyarla(int);
    void ayAyarla(int);
    void yilAyarla(int);
    int gunOku();
    int ayOku();
    int yilOku();
    Tarih *operator=( Tarih );

    bool operator<(const Tarih &)const;
    bool operator>(const Tarih &)const;

};
istream &operator>>(istream &input,Tarih &bir_tarih);
ostream &operator<<(ostream &output, Tarih &bir_tarih);


#endif // TARIH_H_INCLUDED
