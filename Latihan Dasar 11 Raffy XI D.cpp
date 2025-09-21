#include <iostream>
using namespace std;

int main(){
    int nilai;
    cout << "Pilihan kode jalur medis" << endl;
    cout << "1. Kedokteran\n2. Farmasi\n3. Perawat\n4. Office Boy" << endl << endl;
    cout << "Nilai dimulai dari 0 - 100" << endl;
    cout << "Inputkan nilai anda: ";
    cin >> nilai;
    if (nilai >= 90){
        cout << "Anda diterima di jalur Kedokteran";
    }
    else if (nilai >= 80){
        cout << "Anda diterima di jalur Farmasi";
    }
    else if (nilai >= 70){
        cout << "Anda diterima di jalur Perawat";
    }
    else if (nilai >= 60){
        cout << "Anda diterima di jalur Office Boy";
    }
    else{
        cout << "Anda tidak diterima.";
    }
    return 0;
}