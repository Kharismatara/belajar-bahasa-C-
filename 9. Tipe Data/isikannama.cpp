#include <iostream>
using namespace std;

int main(){
    string nama;
    int umur;
    char jeniskelamin ;

    cout << "masukan namamu \n";
    cout << "jawab ";
    getline(cin,nama);
    cout << "masukan umurmu \n";
    cout << "jawab ";
    cin >> umur;
    cout << "masukan jenis kelaminmu[L/P] \n";
    cout << "jawab ";
    cin>> jeniskelamin;
    cout << "SELAMAT DATANG " << nama <<"sekarang umurmu "  << umur << "kamu berjenis kelamin " << jeniskelamin ;

    cin.get();
}