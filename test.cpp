#include <iostream> //Memasukkan library iostream
#include <cmath> //Memasukkan library cmath
using namespace std; //agar tidak perlu menulis std::

int main(){
    double jarijari, luas; //Datatipe desimal presisi tinggi (15~16 digit desimal)
    cout << "Program Penghitung Luas Lingkaran C++" << endl;
    cout << "Masukkan nilai jari-jari lingkaran (r): ";
    cin >> jarijari;
    cout << endl;
    luas = M_PI * pow(jarijari, 2); // pow(koefisien, pangkat)
    cout << "Luas lingkaran adalah: " << luas << endl;
    return 0;
}
