#include <iostream>
using namespace std;

int main(){
    int baris = 5;
    int kolom = 7;
    for (int i = 1; i <= baris; i++){
        for (int j = 1; j <= kolom; j++){
            cout << i;
        }
        cout << endl;
    }
    return 0;
}