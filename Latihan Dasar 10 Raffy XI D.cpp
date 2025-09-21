#include <iostream>
using namespace std;

int main(){
    char pilihan;
    cout << "Masukkan kode (a - e) Untuk Memilih Pilihan Informasi Sekolah Tenaga Kependidikan" << endl;
    cout << "a. Teknik Informatika\nb. Teknik Elektro\nc. Teknik Desain dan Visual\nd. Kedokteran\ne. Tidak Memilih" << endl;
    cout << "Pilihan: ";
    cin >> pilihan;
    cout << endl;
    if (pilihan == 'a'){
        cout << "Anda memilih teknik informatika." << endl;
    }
    else if (pilihan == 'b'){
        cout << "Anda memilih teknik elektro." << endl;
    }
    else if (pilihan == 'c'){
        cout << "Anda memilih teknik desain dan visual." << endl;
    }
    else if (pilihan == 'd'){
        cout << "Anda memilih kedokteran." << endl;
    }
    else if (pilihan == 'e'){
        cout << "Anda tidak memilih." << endl;
    }
    else{
        cout << "Format salah" << endl;
    }
    return 0;
}