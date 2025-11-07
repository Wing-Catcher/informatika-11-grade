#include <iostream>
using namespace std;
int main(){
    string a;
    do{
        cout << "Hello World!" << endl;
        getline(cin, a);
    } while (a == "yes");
    cout << "exit" << endl;
    return 0;
}