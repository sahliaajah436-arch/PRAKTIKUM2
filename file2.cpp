//library
#include <iostream>
using namespace std;

//deklarasi global
int p, l, luas;

//implementasi prosedur dan fungsi
void input(){
    cout << "Masukkan panjang = ";
    cin >> p;
    cout << "Masukkan lebar = ";
    cin >> l;
}

float jumlah(float a, float b, float c) {
    return a + b + c;
}

int luasPersegi(int a, int b) {
    return a* b;
}

