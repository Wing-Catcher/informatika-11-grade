#include <iostream>
using namespace std;

int main(){
    char nilai;
    cout << "Masukkan nilai: ";
    cin >> nilai;
    cout << endl;
    switch (nilai){
        case 'A':
            cout << "Pertahankan!" << endl;
            break;
        case 'B':
            cout << "Harus lebih baik lagi!" << endl;
            break;
        case 'C':
            cout << "Perbanyak belajar!" << endl;
            break;
        case 'D':
            cout << "Jangan keseringan main" << endl;
            break;
        case 'E':
            cout << "Kebanyakan bolos.." << endl;
            break;
        default:
            cout << "Maaf, format nilai tidak sesuai" << endl;
            break;
    }
    return 0;
}