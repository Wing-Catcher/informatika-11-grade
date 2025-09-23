#include <iostream>
using namespace std;

int main(){
    int angka;
    cout << "Masukkan angka: ";
    cin >> angka;
    if (angka % 2 == 1){
        cout << "Itu adalah angka ganjil";
    }
    else{
        cout << "Angka itu genap";
    }
    return 0;
}