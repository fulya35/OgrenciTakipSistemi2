
#include <iostream>
#include <cstring>

using namespace std;
#include "String.h"
#include "Bilgisayar.h"
#include "Tarih.h"
#include"Ogrenci.h"
#include"OgrenciDizisi.h"
using std::ostream;

OgrenciDizisi::OgrenciDizisi()
{
    for(int i=0; i<1000; i++)
    {
        ptr_dizisi[i]=NULL; // ogrenci tipinde bir ptr dizisi olusturuluyor.
    }
    ogrenci_sayisi=0;

}

void OgrenciDizisi::ogr_kayit_ekle(int deger) // ogrenci bilgileri aliniyor.
{
    int snf=1;
    float ort=0.00;
    Tarih kt;
    Tarih dt;

    String a(15);
    String s(20);

    Bilgisayar b;

    if(ptr_dizisi[deger-1]==NULL)
    {

        cout<<endl<<"Kaydedilecek ogrencinin adini giriniz: ";
        cin>>a;
        cout<<endl<<"Kaydedilecek ogrencinin soyadini giriniz: ";
        cin>>s;
        cout<<endl<<"Kaydedilecek ogrencinin dogum tarihi icin: "<<endl;
        cin>>dt;
        cout<<endl<<"Kaydedilecek ogrencinin kayit tarihi icin: "<<endl;
        cin>>kt;
        cout<<endl<<"Kaydedilecek ogrencinin kayit tasinabilir bilgisayari  icin: "<<endl;
        cin>>b;
        ptr_dizisi[deger-1]=new Ogrenci(deger,a,s,dt,kt,snf,ort,b);

    }
    else
        cout<<"Bu numarali bir ogrenci zaten var!!!"<<endl;
}
void OgrenciDizisi::gecis_ogr_ekle(int deger) // gecis yapan ogrencinin bilgileri aliniyor.
{
    int snf=1;
    float ort=0.00;

    Tarih kt;
    Tarih dt;

    String a(15);
    String s(20);


    Bilgisayar b;
    if(ptr_dizisi[deger-1]==NULL)
    {

        cout<<endl<<"Kaydedilecek ogrencinin adini giriniz: ";
        cin>>a;
        cout<<endl<<"Kaydedilecek ogrencinin soyadini giriniz: ";
        cin>>s;
        cout<<endl<<"Kaydedilecek ogrencinin dogum tarihi icin: "<<endl;
        cin>>dt;
        cout<<endl<<"Kaydedilecek ogrencinin kayit tarihi icin: "<<endl;
        cin>>kt;
        cout<<endl<<"Kaydedilecek ogrencinin sinifini girin: ";
        cin>>snf;
        cout<<endl<<"Kaydedilecek ogrencinin ortalamasini girin: ";
        cin>>ort;
        cout<<endl<<"Kaydedilecek ogrencinin tasinabilir bilgisayari  icin: "<<endl;
        cin>>b;
        ptr_dizisi[deger-1]=new Ogrenci(deger,a,s,dt,kt,snf,ort,b);

        ogrenci_sayisi++;
        cout<<"Yeni ogrenci eklenmistir"<<endl;

    }
    else
        cout<<"Bu numarali bir ogrenci zaten var!!!"<<endl;



}

void OgrenciDizisi::sinif_not_ort_guncelleme()//3.secenek
{
    int sinif;
    float ort;
    for(int i=0; i<1000; i++)
    {
        if(ptr_dizisi[i]!=NULL)
        {
            cout<<ptr_dizisi[i]->noOku()<<"numarali ogrenci icin yeni sinifi giriniz: ";
            cin>>sinif;
            cout<<"Yeni not_ortalamasini giriniz:"<<endl;
            cin>>ort;
            ptr_dizisi[i]->sinifAyarla(sinif);
            ptr_dizisi[i]->notAyarla(ort);
        }
    }
}

void OgrenciDizisi::ogr_kayit_silme()//4.secenek
{
    int no;
    cout<<"Kaydi silinecek ogrencinin ogrenci numarsini giriniz: ";
    cin>>no;
    if(ptr_dizisi[no-1]!=NULL)
    {
        ogrenci_sayisi=ogrenci_sayisi-1;
        ptr_dizisi[no-1]=NULL;
        cout<<"Ogrenci basariyla silindi"<<endl;
    }
    else cout<<"Bu numaraya sahip bir ogrenci yok!"<<endl;

}

void OgrenciDizisi:: ogr_bilgi_goruntuleme()//5.secenek
{
    int ogrNo;


    cout<<"Gorunutlemek istediginiz ogrencinin numarasini giriniz: ";
    cin>>ogrNo;
    if(ptr_dizisi[ogrNo-1]!=NULL)
    {

        cout<<ptr_dizisi[ogrNo-1]<<endl;
    }
    else cout<<"Bu numaraya sahip bir ogrenci yoktur!"<<endl;
}

void OgrenciDizisi:: bir_sinifin_listelenmesi()//7.secenek
{
    int snf,sayac=0,k=0;
    cout<<"Goruntulemek istediginiz sinifi giriniz: ";
    cin>>snf;

    for(int i=0; i<1000; i++)
    {
        if(ptr_dizisi[i]!=NULL && ptr_dizisi[i]->sinif_oku()==snf)
        {
            k=1;

            cout<<ptr_dizisi[i];
            sayac++;
        }
    }
    if(k==0) cout<<snf<<". sinifa kayitli ogrenci yoktur!"<<endl;
    else cout<<"Sinifin ogrenci sayisi:"<<sayac<<endl;
}

void OgrenciDizisi::belirli_ada_sahip_ogr_listelenmesi()//8.secenek
{
    String a(15);
    int k=0;
    cout<<"Ayni ada sahip ogrencileri gormek icin bir ad giriniz: ";
    cin>>a;

    for(int i=0; i<1000; i++)
    {
        if(ptr_dizisi[i]!=NULL )
        {
            if(strcasecmp(ptr_dizisi[i]->adOku(),a.string_oku())==0)
            {
                k=1;

                cout<<ptr_dizisi[i];
            }
        }
    }
    if(k==0) cout<<"Bu ada sahip bir ogrenci yoktur!"<<endl;
}


void OgrenciDizisi:: belirli_tarihte_dogan_ogr_listelenmesi()//9.secenek
{
    Tarih t;
    int k=0;
    cout<<"Tarihi giriniz"<<endl;
    cin>>t;

    for(int i=0; i<1000; i++)
    {
        if(ptr_dizisi[i]!=NULL && ptr_dizisi[i]->dogum_tarihOku()<t)
        {
            k=1;

            cout<<ptr_dizisi[i];

        }

    }
    if(k==0) cout<<"Bu tarihten once dogan ogrenci yoktur!"<<endl;

}

void OgrenciDizisi::  belirli_yildan_sonra_listelenmesi()//10.secenek
{
    int yili,k=0;
    Tarih t;
    cout<<"Yili giriniz:";
    cin>>yili;

    for(int i=0; i<1000; i++)
    {
        if(ptr_dizisi[i]!=NULL)
        {
            t=ptr_dizisi[i]->kayit_tarihOku();
            if(t.yilOku()>yili)
            {
                k=1;

                cout<<ptr_dizisi[i];
                            }

        }

    }
    if(k==0)cout<<"Bu yildan sonra okula kayitlanan ogrenci yoktur!"<<endl;

}


void OgrenciDizisi:: tasinabilir_bilgsayara_gore_listelenmesi()//11.secenek
{
    String seri_no(12);
    int k=0,t=1;
    cout<<"Seri numarasini giriniz: ";
    cin>>seri_no;

    for(int i=0; i<1000; i++)
    {
        if(ptr_dizisi[i]!=NULL)
        {
            t=0;
            if(ptr_dizisi[i]->bilgisayarOku().seri_noOku()==seri_no)
            {
                k=1;

                cout<<ptr_dizisi[i];
            }
        }
    }
    if(t==1) cout<<"Bu numaraya sahip bir ogrenci yoktur!"<<endl;
    if(k==0) cout<<endl<<"Seri numarasi "<<seri_no<<" olan bilgisayar hicbir ogrenciye verilmemistir!"<<endl;

}

void OgrenciDizisi:: belirli_marka_model_bilgisayara_gore_listelenmesi()//12.secenek
{
    String marka(10);
    String model(10);
    int kontrol1=1;
    int kontrol2=0;
    int kontrol3=2;

    cout<<"Bilgisayarin marka ve modelini giriniz: "<<endl;
    cin>>marka;
    cin>>model;

    for(int i=0; i<1000; i++)
    {
        if(ptr_dizisi[i]!=NULL)
        {
            kontrol1=0;

            if(strcasecmp(((ptr_dizisi[i]->bilgisayarOku()).markaOku()).string_oku(),marka.string_oku())==0)
            {
                kontrol2=1;
                if(ptr_dizisi[i]->bilgisayarOku().modelOku()==model)
                {
                    kontrol3=3;
                    cout<<ptr_dizisi[i];
                }

            }
        }
    }
    if(kontrol1==1)
    cout<<"Bu numaraya sahip bir ogrenci yoktur!"<<endl;
    else if(kontrol2==0 || kontrol3==2) cout<<"Bu marka ve modeldeki bilgisayara sahip olan bir ogrenci yoktur."<<endl;
}

ostream &operator<<( ostream &output, const OgrenciDizisi &dizi)//<< operatorunun asiri yuklenmesi
{
    int k=0;

    for(int i=0; i<1000; i++)
    {
        if(dizi.ptr_dizisi[i]!=NULL)
        {
            k=1;
            cout<<dizi.ptr_dizisi[i]<<endl;

        }
    }
    if(k==0) cout<<"Okula kayitli hicbir ogrenci yoktur!"<<endl;
    return output;
}


