#include <iostream>
using namespace std;

int main(){
    int nomorInduk, jumlah;
    long total, harga;
    string nama, namaOperator, judulBuku;

    // Headers
    cout << "====================" << endl;
    cout << "Program Perpustakaan Mini" << endl;
    cout << "Pembuat: Raffy Ahmad Jaliyyan" << endl;
    cout << "====================" << endl;
    cout << endl;

    // Inputs
    cout << "Nama Operator: ";
    // Pak Nopen + Bu Cice
    getline(cin, namaOperator);
    cout << "Nama peminjam buku: ";
    getline(cin, nama);
    cout << "Judul buku yang dipinjam: ";
    getline(cin, judulBuku);
    cout << "Nomor Induk Perpustakaan: ";
    cin >> nomorInduk;
    cout << "Jumlah buku yang dipinjam: ";
    cin >> jumlah;
    cout << "Harga per buku: ";
    cin >> harga;
    
    // Calculate
    total = jumlah * harga;
    
    // Return
    cout << endl;
    cout << "Halo, " << nama <<". Dengan nomor induk: " << nomorInduk << "." << endl;
    cout << "Total biaya buku yang dipinjam untuk " << judulBuku << " adalah: " << total << " rupiah." << endl;
    return 0;
}