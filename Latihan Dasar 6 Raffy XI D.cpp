#include <iostream>
using namespace std;

int main(){
    string makanan, minuman;
    int harga = 5000, jumlah;
    long total;

    cout << "====================" << endl;
    cout << "Program Kantin Mini" << endl;
    cout << "Pembuat: Raffy Ahmad Jaliyyan" << endl;
    cout << "====================" << endl;
    cout << endl;
    cout << "Menu Makanan:" << endl;
    cout << "NASI MAWUT" << endl;
    cout << "NASI AYAM GEPREK" << endl << endl;
    cout << "Menu Minuman:" << endl;
    cout << "ES CINCAU" << endl;
    cout << "ES MANDARIN" << endl << endl;

    cout << "INPUTKAN MAKANAN PESANAN KAMU: ";
    getline(cin,makanan);
    cout << "INPUTKAN MINUMAN PESANAN KAMU: ";
    getline(cin,minuman);
    cout << "Total pesanan yang anda beli: ";
    cin >> jumlah;
    total = jumlah * harga;

    cout << endl;
    cout << "Halo Pelanggan, biaya total pesanan anda untuk " << makanan << " dan " << minuman << " adalah: " << total << " Rupiah.";
    return 0;
}