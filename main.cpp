
#include <iostream>

using namespace std;
#include "Tarih.h"
#include "String.h"
#include "Bilgisayar.h"
#include "Ogrenci.h"
#include "OgrenciDizisi.h"
int menu();

int main()
{

    int secim;
    int ogrNo=0;

    OgrenciDizisi dizi;

    do  //kullanici cikmak isteyene kadar dongu devam eder
    {
        secim=menu();

        switch (secim)
        {
        case 1:

            cout<<"Kaydedilecek ogrencinin numarasini giriniz: ";
            cin>>ogrNo;
            dizi.ogr_kayit_ekle(ogrNo);

            break;
        case 2:
            cout<<"Kaydedilecek ogrencinin numarasini giriniz: ";
            cin>>ogrNo;
            dizi.gecis_ogr_ekle(ogrNo);

            break;
        case 3:
            dizi.sinif_not_ort_guncelleme();

            break;
        case 4:

            dizi.ogr_kayit_silme();

            break;
        case 5:
            dizi.ogr_bilgi_goruntuleme();

            break;
        case 6:
            cout<<dizi;

            break;
        case 7:
            dizi.bir_sinifin_listelenmesi();

            break;
        case 8:
            dizi.belirli_ada_sahip_ogr_listelenmesi();

            break;
        case 9:
            dizi.belirli_tarihte_dogan_ogr_listelenmesi();
            break;

        case 10:
            dizi.belirli_yildan_sonra_listelenmesi();
            break;
        case 11:
            dizi.tasinabilir_bilgsayara_gore_listelenmesi();

            break;
        case 12:
            dizi.belirli_marka_model_bilgisayara_gore_listelenmesi();
            break;
        }

    }
    while ( secim!=13);   //Kullanici 13 girerse program sonlanir.


    return 0;

}

int menu()
{
    int secim;

    cout<<"\n  --------------------------------MENU----------------------------------------\n"
        <<"1)  Yeni kazanan bir ogrencinin okula kaydedilmesi\n"
        <<"2)  Yatay gecisle gelen bir ogrencinin okula kaydedilmesi\n"
        <<"3)  Yil sonunda tum ogrencilerin siniflarinin ve not ortalamalarinin guncellenmesi\n"
        <<"4)  Bir ogrencinin okuldan kaydinin silinmesi\n"
        <<"5)  Bir ogrencinin bilgilerinin listelenmesi\n"
        <<"6)  Okula kayitli tum ogrencilerin listelenmesi\n"
        <<"7)  Bir sinifta okuyan ogrencilerin listelenmesi\n"
        <<"8)  Belirli bir ada sahip ogrencilerin listelenmesi\n"
        <<"9)  Belirli bir tarihten once dogan ogrencilerin listelenmesi\n"
        <<"10) Belirli bir yildan sonra okula kaydolmus ogrencilerin listelenmesi\n"
        <<"11) Bir tasinabilir bilgisayarin verilmis oldugu ogrencinin bilgilerinin goruntulenmesi\n"
        <<"12) Belirli bir marka ve model bilgisayarin verilmis oldugu ogrencilerin listelenmesi\n"
        <<"13) Cikis\n"
        <<"-------------------------------------------------------------------------------\n"<<endl;

    do
    {
        cout<<endl<<"Seciminizi girin:";
        cin>>secim;

    }
    while (secim<1||secim>13);

    return secim;

}

