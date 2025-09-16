#include <iostream>
using namespace std;

int main(){
    string pilihan;
    cout << "Masukkan Input dengan huruf balok (besar)" << endl;
    cout << "Pilih agama anda: \nA. Islam\nB. Kristen Protestan\nC. Kristen Katolik\nD. Hindu\nE. Buddha\nF. Konghucu" << endl;
    cout << endl;
    cout << "Inputkan agama anda: ";
    cin >> pilihan;

    if (pilihan == "A"){
        cout << "Agama anda adalah Islam" << endl;
    }
    else if(pilihan == "B"){
        cout << "Agama anda adalah Kristen Protestan" << endl;
    }
    else if(pilihan == "C"){
        cout << "Agama anda adalah Kristen Katolik" << endl;
    }
    else if(pilihan == "D"){
        cout << "Agama anda adalah Hindu" << endl;
    }
    else if(pilihan == "E"){
        cout << "Agama anda adalah Buddha" << endl;
    }
    else if(pilihan == "F"){
        cout << "Agama anda adalah Konghucu" << endl;
    }
    else{
        cout << "Format salah" << endl;
    }
    return 0;
}