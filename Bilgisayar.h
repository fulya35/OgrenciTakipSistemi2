
#ifndef BILGISAYAR_H_INCLUDED
#define BILGISAYAR_H_INCLUDED

#include <iostream>

using namespace std;

#include "String.h"

using std::istream;
using std::ostream;

class Bilgisayar
{
    friend ostream &operator<<(ostream &,const Bilgisayar &);
    friend istream &operator>>(istream &,Bilgisayar &);
    public:
        Bilgisayar(int=12,int=10 ,int=10);
        String seri_noOku();
        String markaOku();
        String modelOku();
        void seri_noAyarla( String &);
        void markaAyarla(String &);
        void modelAyarla(String &);


    private:
    String seri_no;
    String marka;
    String model;

};

#endif // BILGISAYAR_H_INCLUDED
