#include <iostream>
using namespace std;
int main(){
    cout << "MENURUN KEATAS" << endl;
    char begin, end;
    cout << "Masukkan Huruf Akhir: ";
    cin >> end;
    cout << "Masukkan Huruf Awal: ";
    cin >> begin;
    char i = begin;
    while (i <= end){
        cout << i << " Smada" << endl;
        i++;
    }
    return 0;
}