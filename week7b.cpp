#include <iostream>
using namespace std;

int main () {
// belajar switch
int menu ;
cout    << " pilih menu (1-3)"<< endl;
cin     >>  menu;
switch(menu) {
case 1 :
    cout << "nasi goreng " << endl ;
    break;
case 2 :
    cout << "nasi rames " << endl ;
    break; 
case 3 :
    cout << "nasi kuniing  " << endl ;
    break;
default : 
    cout  << " masukkan menu dengan benar" << endl;
  }
return 0;
}
