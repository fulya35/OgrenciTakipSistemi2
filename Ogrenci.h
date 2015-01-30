#ifndef OGRENCI_H_INCLUDED
#define OGRENCI_H_INCLUDED

#include <iostream>
using namespace std;

#include "Tarih.h"
#include "String.h"
#include "Bilgisayar.h"

using std::ostream;

class Ogrenci
{
    friend ostream &operator<<(ostream &, Ogrenci *);

  private:
    const int ogr_no;
    String ad;
    String soyad;
    const Tarih dogum_t;
    const Tarih kayit_t;
    const Bilgisayar bir_bilgisayar;
    int sinif;
    float not_ort;

    public:
    Ogrenci();
        Ogrenci(int,String &,String &,Tarih &,Tarih &,int ,float,Bilgisayar);
        int sinif_oku();
        int noOku();
        float not_oku();
        char *adOku();
        String soyadOku();
        Tarih dogum_tarihOku() const ;
        Tarih kayit_tarihOku() const;
        Bilgisayar bilgisayarOku();

        void sinifAyarla(int);
        void notAyarla(float);

};



#endif // OGRENCI_H_INCLUDED
