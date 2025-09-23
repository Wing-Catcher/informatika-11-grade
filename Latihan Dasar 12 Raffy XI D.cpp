#include <iostream>
using namespace std;

int main(){
    double nilai;
    cout << "Inputkan nilai anda: ";
    cin >> nilai;
    
    if (nilai >= 90 && nilai <= 100){
        cout << "Predikat anda: A" << endl;
    }
    else if(nilai >= 70 && nilai <= 89){
        cout << "Predikat anda: B" << endl;
    }
    else if(nilai >= 50 && nilai <= 69){
        cout << "Predikat anda: C" << endl;
    }
    else{
        cout << "Predikat anda: D" << endl;
    }
    return 0;
}