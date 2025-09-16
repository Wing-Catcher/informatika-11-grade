#include <iostream>
using namespace std;

int main(){
    string servis, aksesoris;
    int hargaServis = 5000, hargaAksesoris = 45000, jumlah;
    long total;

    cout << "====================" << endl;
    cout << "Program Tukang Tambal BAN" << endl;
    cout << "Pembuat: Raffy Ahmad Jaliyyan" << endl;
    cout << "====================" << endl;
    cout << endl;
    cout << "Menu Servis:" << endl;
    cout << "1. Tambal Ban" << endl;
    cout << "2. Lurusin Velg" << endl;
    cout << "3. Isi Angin Ban" << endl << endl;
    cout << "Menu Aksesoris:" << endl;
    cout << "1. Velg Custom" << endl;
    cout << "2. Ban Custom" << endl;
    cout << "3. Tutup Ban Custom" << endl << endl;

    cout << "INPUTKAN LAYANAN YANG INGIN DIBELI: ";
    getline(cin, servis);
    cout << "INPUTKAN AKSESORIS YANG INGIN DIBELI: ";
    getline(cin, aksesoris);
    cout << "Total pesanan yang anda beli: ";
    cin >> jumlah;
    total = (hargaAksesoris + hargaServis);

    cout << endl;
    cout << "Halo Pelanggan, biaya total pesanan anda untuk " << servis << " dan " << aksesoris << " adalah: " << total << " Rupiah.";
    return 0;
}