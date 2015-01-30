
#ifndef OGRENCIDIZI_H_INCLUDED
#define OGRENCIDIZI_H_INCLUDED

#include <iostream>

using namespace std;
#include "String.h"
#include "Bilgisayar.h"
#include "Tarih.h"
#include"Ogrenci.h"
using std::ostream;


class OgrenciDizisi
{
    friend ostream &operator<<(ostream &,const OgrenciDizisi &);

private:
 Ogrenci *ptr_dizisi[1000];
   int ogrenci_sayisi;
public:

    OgrenciDizisi();

    void ogr_kayit_ekle(int);
    void gecis_ogr_ekle(int);
    void   sinif_not_ort_guncelleme();
    void  ogr_kayit_silme();
    void   ogr_bilgi_goruntuleme();
    void bir_sinifin_listelenmesi();
    void  belirli_ada_sahip_ogr_listelenmesi();
    void belirli_tarihte_dogan_ogr_listelenmesi();
    void  belirli_yildan_sonra_listelenmesi();
    void  tasinabilir_bilgsayara_gore_listelenmesi();
    void belirli_marka_model_bilgisayara_gore_listelenmesi();

};


#endif // OGRENCIDIZI_H_INCLUDED
