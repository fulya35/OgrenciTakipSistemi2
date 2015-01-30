#include <iostream>
#include<iomanip>

using namespace std;

#include "Tarih.h"
#include "String.h"
#include "Bilgisayar.h"
#include "Ogrenci.h"

using std::ostream;
Ogrenci::Ogrenci():ogr_no(0)
{
    sinif=1;
    not_ort=0;
}
Ogrenci::Ogrenci(int ogrNo,String &a,String &s,Tarih &dt,Tarih &kt,int snf,float ort,Bilgisayar b)
    :ogr_no(ogrNo),ad(a),soyad(s),dogum_t(dt),kayit_t(kt),bir_bilgisayar(b)
{
    sinifAyarla(snf);
    notAyarla(ort);
}
int Ogrenci::sinif_oku()
{
    return sinif;
}
float Ogrenci::not_oku()
{
    return not_ort;
}
int Ogrenci::noOku()
{
    return ogr_no;
}


char *Ogrenci::adOku()
{
    return ad.string_oku();
}

String Ogrenci::soyadOku()
{
    return soyad;
}

Tarih Ogrenci::dogum_tarihOku() const
{
    return dogum_t;
}

Tarih Ogrenci::kayit_tarihOku()const
{
    return kayit_t;
}

Bilgisayar Ogrenci::bilgisayarOku()
{
    return bir_bilgisayar;
}

void Ogrenci::sinifAyarla(int s)
{
    sinif=s;
}
void Ogrenci::notAyarla(float n)
{
    not_ort=n;
}

ostream &operator<<(ostream &output, Ogrenci *bir_ogrenci)//<< operatorunun asiri yuklenmesi
{
    Tarih dt,kt;

    cout<<"Ogr No  Ad         Soyad      Sinif    Not Ort"<<endl;
    cout<<"------  -------    -----      ------    ------"<<endl;

    output<<bir_ogrenci->ogr_no<<setw(10)<<bir_ogrenci->ad<<setw(10)<<bir_ogrenci->soyad<<setw(10)<<bir_ogrenci->sinif<<setw(10)<<bir_ogrenci->not_ort<<endl;


    cout<<bir_ogrenci->bir_bilgisayar<<endl;
    cout<<"Dogum Tarihi:";
    dt=bir_ogrenci->dogum_t;

    cout<<dt<<endl;
    cout<<"Okula kayitlandigi tarih:";
    kt=bir_ogrenci->kayit_t;
    cout<<kt<<endl;
    cout<<endl<<"---------------------------------------------------------------------"<<endl;

    return output;

}

