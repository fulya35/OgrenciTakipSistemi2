
#include <iostream>
using namespace std;
#include "Tarih.h"


Tarih::Tarih(int g,int a,int y)
{
    gunAyarla(g);
    ayAyarla(a);
    yilAyarla(y);
}

void Tarih::gunAyarla(int g)
{
    gun=(g>0 && g<=31)? g:0;

}

void Tarih::ayAyarla(int a)
{
    ay=(a>0 && a<=12)? a:0;
}

void Tarih::yilAyarla(int y)
{
    yil=(y>0)? y:0;
}

int Tarih::gunOku()
{
    return gun;
}

int Tarih::ayOku()
{
    return ay;
}

int Tarih::yilOku()
{
    return yil;
}

bool Tarih::operator<(const Tarih &bir_tarih)const
{
    if((yil<bir_tarih.yil && ay<bir_tarih.ay && gun<bir_tarih.gun) || (yil==bir_tarih.yil && ay<bir_tarih.ay && gun<bir_tarih.gun)
      || (yil==bir_tarih.yil && ay<bir_tarih.ay && gun==bir_tarih.gun) || (yil<bir_tarih.yil && ay==bir_tarih.ay && gun==bir_tarih.gun)
       || (yil==bir_tarih.yil && ay==bir_tarih.ay && gun<bir_tarih.gun))

        return true;
    return false;
}

bool Tarih::operator>(const Tarih &bir_tarih)const
{
    if((yil>bir_tarih.yil && ay>bir_tarih.ay && gun>bir_tarih.gun) || (yil==bir_tarih.yil && ay>bir_tarih.ay && gun>bir_tarih.gun)
       || (yil==bir_tarih.yil && ay>bir_tarih.ay && gun==bir_tarih.gun) || (yil>bir_tarih.yil && ay==bir_tarih.ay && gun==bir_tarih.gun)
       ||(yil==bir_tarih.yil && ay==bir_tarih.ay && gun>bir_tarih.gun))

        return true;
    return false;
}

istream &operator>>(istream &input,Tarih &bir_tarih)//>>operatorunun asiri yuklenmesi
{
    int g,a,y;
    cout<<"gunu girin:";
    input>>g;

    bir_tarih.gunAyarla(g);
    cout<<"ayi girin:";
    input>>a;

    bir_tarih.ayAyarla(a);
    cout<<"yili girin:";
    input>>y;

    bir_tarih.yilAyarla(y);


    return input;
}

ostream &operator<<(ostream &output, Tarih &bir_tarih)//<< operatorunun asiri yuklenmesi
{
    output<< bir_tarih.gunOku() <<"."<< bir_tarih.ayOku() <<"."<<bir_tarih.yilOku();
    return output;
}

Tarih *Tarih::operator=( Tarih sagdaki)//= operatorunun asiri tuklenmesi
{
    if(this!=&sagdaki)
    {
        gun=sagdaki.gunOku();
        ay=sagdaki.ayOku();
        yil=sagdaki.yilOku();
    }

    return this;
}


