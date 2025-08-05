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
Masukkan umur anda: 19
Masukkan alamat anda: RT3 RW1 Setri Wonorejo Gandusari Trenggalek
Masukkan Tempat Lahir anda: Trenggalek

Hai, ini adalah biodata singkatku:
Umurku: 19 Tahun
Namaku: Raffy
Alamat: RT3 RW1 Setri Wonorejo Gandusari Trenggalek
Tempat lahir: Trenggalek
*/
