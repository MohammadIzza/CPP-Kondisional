#include <iostream>
using namespace std;

int main(){
    float V, P1, P2;
    int N;
    cout << "masukkan Volume Kolam" << endl;
    cin >> V ;
    cout << "masukkan debit air pipa 1" << endl;
    cin >> P1;
    cout << "masukkan debit air pipa 2" << endl ;
    cin >> P2;
    cout << "masukkan waktu (jam)" << endl ;
    cin >> N;
    
    // kondisi 
    float debit_air_1, debit_air_2, total_debit;
    debit_air_1 = P1*N;
    debit_air_2 = P2*N;
    total_debit = debit_air_1 + debit_air_2;

    float persentase_volume, persentase_P1, persentase_P2;
    
    if (V >= total_debit){
        // tidak luber 
        cout << "The pool is " << total_debit/V * 100 << "%" << " full " << endl;
        cout << "Full pipe 1 " << debit_air_1/total_debit * 100 << " %" << endl;
        cout << "Full pipe 2 " << debit_air_2/total_debit * 100 << " %" << endl;
    }
    else  {
        // luber 
        cout << "For " << N << "hours the pool overflows with " << total_debit - V << endl ;
    }

return 0;
}
