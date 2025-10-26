/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include <string>
using namespace std;
class Karakter{
    public:
         string adi; 
         int can;
         void kosma(){
             cout<< adi<< "koşuyor "<<endl;
         }
};

int main()
{
    Karakter karakter1;
    //strcpy(karakter1.adi,"Mini Pekka");
    karakter1.adi = "Mini Pekka";
    karakter1.can = 4200;
    
    Karakter karakter2;
    //strcpy(karakter2.adi,"İksir Golemi");
    karakter2.adi = "İksir Golemi";
    karakter2.can = 8000;
    cout<<"karakter1:"<<karakter1.adi<<endl;
     cout<<"karakter2:"<<karakter2.adi<<endl;
     karakter1.kosma();
     karakter2.kosma();
     
    return 0;
}