#include <iostream>
using namespace std;

int main()
{
    int n;
    string waktu;
    cout << "masukkan jarak ";
    cin >> n;
    cout << "masukkan waktu keberangkatan (siang / malam) " << endl;
    cin >> waktu;
    if (waktu == "siang" || waktu == "malam")
    {
        // kondisi
        int tarif_malam, tarif_siang, tarif;

        // kereta
        if (n >= 100)
        {
            cout << "kereta" << endl;
            tarif = n * 0.06;
            cout << "tarif kereta dengan jarak " << n << " km adalah " << tarif << endl;
        }
        else if (n >= 20 && n < 100)
        {
            cout << " Bis " << endl;
            tarif = n * 0.09;
            cout << "tarif bis dengan jarak " << n << " km adalah " << tarif << endl;
        }
        string waktu;
        if (n < 20)
        {
            if (waktu == "siang")
            {
                tarif_siang = n * 0.79;
                cout << "tarif taksi dengan jarak " << n << " km adalah " << tarif_siang << endl;
            }
            else
            {
                tarif_malam = n * 0.9;
                cout << "tarif taksi dengan jarak " << n << " km adalah " << tarif_malam << endl;
            }
        }
    }
    else
    {
        cout << "masukkan waktu yang benar " << endl;
    }

    return 0;
}
