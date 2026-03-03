#include <iostream>
using namespace std;

    //deklarasi variable
    float jarijari;
    float phi =3.14159;
    //bagian fungsi
    void awal(){
        cout << "Masukkan jari-jari lingkaran = ";
        cin >> jarijari;    
    }

    float luas (float jari_jari, float phi){
        return phi * jarijari * jarijari;
    }
    void akhir (){
        cout << "hasil luas untuk lingkaran dengan jari-jari " << jarijari<< luas(jarijari, phi);
    }
    int main (){
        awal();
        akhir();
    }