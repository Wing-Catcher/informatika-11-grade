#include <iostream>
using namespace std;

int main(){
    string nama, alamat, tempatLahir;
    int umur;

    cout << "Masukkan nama depan anda: ";
    cin >> nama;
    cout << "Masukkan umur anda: ";
    cin >> umur;
    cin.ignore();

    cout << "Masukkan alamat anda: ";
    getline(cin, alamat);
    cout << "Masukkan Tempat Lahir anda: ";
    getline(cin, tempatLahir);

    cout << endl;
    cout << "Hai, ini adalah biodata singkatku:" << endl;
    cout << "Umurku: " << umur << " Tahun" << endl;
    cout << "Namaku: " << nama << endl;
    cout << "Alamat: " << alamat << endl;
    cout << "Tempat lahir: " << tempatLahir << endl;
    return 0;
}
/*
OUTPUT

Masukkan nama depan anda: Raffy  
Masukkan umur anda: 17
Masukkan alamat anda: Wonorejo Gandusari Trenggalek
Masukkan Tempat Lahir anda: Trenggalek

Hai, ini adalah biodata singkatku:
Umurku: 17 Tahun
Namaku: Raffy
Alamat: Wonorejo Gandusari Trenggalek
Tempat lahir: Trenggalek
*/
