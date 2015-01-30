#include <iostream>
#include <cstring>

using namespace std;

#include "String.h"

using std::ostream;
using std::istream;


String::String(int b):boy(b)
{
    ptr=new char[boy+1];
    for ( int i = 0; i<boy+1; i++ )
        ptr[i]='\0';

}
String::String(const String &baslangic):boy(baslangic.boy) // buyuk harfe cevirme ve kopya constructor.
{
    ptr=new char[boy];

    for ( int i = 0; i<boy; i++ )
        ptr[ i ] = baslangic.ptr[ i ];
}
char *String::string_oku()
{
    return ptr;
}

const String &String::operator=(const String & sagdaki)//iki stringi birbirine atama
{
    if(&sagdaki!=this)
    {
        if(boy!=sagdaki.boy)
        {
            delete [] ptr;
            boy=sagdaki.boy;
            ptr=new char[boy];
        }
    }
    ptr=sagdaki.ptr;
    return *this;

}

String::~String()
{
    delete [] ptr;

}

bool operator==( const String o1,const String o2)
{
    if ( o1.boy != o2.boy)
        return false;
    for ( int i = 0; i < o1.boy; i++ )
    {
        if ( o1.ptr[i]!= o2.ptr[ i ])
            return false;
    }
    return true;
}

istream &operator>>( istream &input, String &bir_string )
{

    input >> bir_string.ptr;

    return input;
}

ostream &operator<<( ostream &output, const String &bir_string )
{
    int i;

    for ( i = 0; i<bir_string.boy; i++ )
    {
        if(bir_string.ptr[ i ]!='\0')
            output<< bir_string.ptr[ i ];
    }

    return output;
}
