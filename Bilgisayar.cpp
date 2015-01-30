
#include <iostream>

using namespace std;

#include "String.h"
#include "Bilgisayar.h"

using std::ostream;
using std::istream;


Bilgisayar::Bilgisayar(int a,int b ,int c):seri_no(a),marka(b),model(c)
{
}

String Bilgisayar::seri_noOku()
{
    return seri_no;
}

String Bilgisayar::markaOku()
{
    return marka;

}
String Bilgisayar::modelOku()
{
    return model;
}


ostream &operator<<(ostream &output,const Bilgisayar &bir_bilgisayar)
{
    output<<"Verilen Bilgisayar:"<<endl;
    output<<"Seri numarasi     Marka         Model "<<endl;
    output<<"----------------- ------------- -----------"<<endl;

    output<<bir_bilgisayar.seri_no<<"            "<<bir_bilgisayar.marka<<"       "<<bir_bilgisayar.model<<endl;
    return output;
}
istream &operator>>(istream &input,Bilgisayar &bir_bilgisayar)
{

   cout<<"seri noyu girin:";
   input>>bir_bilgisayar.seri_no;

   cout<<"markayi  girin:";
   input>>bir_bilgisayar.marka;

   cout<<"modeli girin:";
   input>>bir_bilgisayar.model;

   return input;
}

