#ifndef STRING_H_INCLUDED
#define STRING_H_INCLUDED
#include <iostream>

using std::ostream;
using std::istream;

class String
{
  friend ostream &operator<<(ostream &,const String &);
 friend istream &operator>>(istream &,String &);
 friend bool operator==( const String,const String);
public:
  String(int =10);
  String(const String &);

  ~String();

   const String &operator=(const String &sagdaki);
   char *string_oku();


private:
    int boy;
    char *ptr;
};



#endif // STRING_H_INCLUDED
