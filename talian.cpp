#include <iostream>
using namespace std;

int main () {

    int umurbapak = 55, umur_saya = 17, x=2, y=4, z; // integer 
    char golongandarah = 'a' ;
    bool jumlah_ibu = true , jumlah_bukanibu = false;
    float tinggi = 171.5;
    double berat = 63.345;
    string nama = "izza" ;
    const int m = 4 ;

    /*tekspembuka */

    cout << " Berapa umut bapak = " << umurbapak << endl;
    cout << " jumlah Ibu  =" << jumlah_ibu << endl;
    cout << " Tinggi badan =" << tinggi << endl ;
    cout << " Berat Badan =" << berat << endl;
    cout << " Masukkan nama =" << nama << endl ;
    cout << " Umur saya " << umur_saya << " Tahun " << endl ;
    //varriabel penjumlahan
    z= x + y ;
    cout << " Jumlah x + y adalah "<< z << endl ;
    cout << " constant ta terbaca "<< m << endl ;

    //array pada string 
    string var1 = "miki" ;
    cout << var1 [0] << endl ;
    cout << var1 [1] << endl ;
    cout << var1 [2] << endl ;
    cout << var1 [3] << endl ;

    // menentukan panjang string dengan length
    cout << "panjang string di var1 = " << var1.length() << endl ;

    // belajar aray
    string kata1 ="makan nasi campur madu";
    kata1[6] = 'b' ;
    kata1[7] = 'u' ;
    kata1[8] = 'b' ;
    kata1[9] = 'u' ;
    kata1[10] = 'r' ;


    //belajar data struck
    
    
    cout << kata1 << endl;


    cin.get ();
    return 1;


}