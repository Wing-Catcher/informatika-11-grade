#include <iostream>
using namespace std;

int main(){
    long belanja, total;
    cout << "Masukkan total belanja anda: Rp. ";
    cin >> belanja;

    if (belanja >=100000){
        total = belanja - 20000;
        cout << "Selamat anda mendapatkan diskon Rp. 20.000" << endl;
        cout << "Total belanja anda: Rp. " << total << ".";
    }
    else if (belanja >= 80000){
        total = belanja - 10000;
        cout << "Selamat anda mendapatkan diskon Rp. 10.000" << endl;
        cout << "Total belanja anda: Rp. " << total << ".";
    }
    else if (belanja >= 60000){
        total = belanja - 5000;
        cout << "Selamat anda mendapatkan diskon Rp. 5.000" << endl;
        cout << "Total belanja anda: Rp. " << total << ".";
    }
    else{
        total = belanja;
        cout << "Maaf anda tidak memperoleh diskon." << endl;
        cout << "Total belanja anda: Rp. " << total << ".";
    }
    return 0;
}