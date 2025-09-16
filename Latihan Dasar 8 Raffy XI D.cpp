#include <iostream>
using namespace std;

int main(){
    int pilihan;
    cout << "Pilih jenis kelamin anda: \n1. Laki-Laki\n2. Perempuan\n3. Transgender" << endl;
    cout << endl;
    cout << "Inputkan jenis kelamin anda: ";
    cin >> pilihan;

    if (pilihan == 1){
        cout << "Jenis kelamin anda adalah laki-laki." << endl;
    }
    else if(pilihan == 2){
        cout << "Jenis kelamin anda adalah perempuan." << endl;
    }
    else if(pilihan == 3){
        cout << "Jenis kelamin anda adalah Transgender." << endl;
    }
    else{
        cout << "Format salah" << endl;
    }
    return 0;
}