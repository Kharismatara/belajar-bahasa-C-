#include <iostream>
using namespace std;


int main(){

    //menulisakan array 
    int nilai[6];
    nilai[0] = 0;
    nilai[1] = 1;
    nilai[2] = 2;
    nilai[3] = 3;
    nilai[4] = 4;

    cout << &nilai[0] << " nilai inde ke- " << nilai[0] << endl;
    cout << &nilai[1] << " nilai inde ke- " << nilai[1] << endl;
    cout << &nilai[2] << " nilai inde ke- " << nilai[2] << endl;
    cout << &nilai[3] << " nilai inde ke- " << nilai[3] << endl;
    cout << &nilai[4] << " nilai inde ke- " << nilai[4] << endl;

//CARA MERUBAH 

    int *ptr = nilai;
    *(ptr + 2 ) =6;
    cout << "merubah nilai " << endl;
    cout << &nilai[0] << " nilai inde ke- " << nilai[0] << endl;
    cout << &nilai[1] << " nilai inde ke- " << nilai[1] << endl;
    cout << &nilai[2] << " nilai inde ke- " << nilai[2] << endl;
    cout << &nilai[3] << " nilai inde ke- " << nilai[3] << endl;
    cout << &nilai[4] << " nilai inde ke- " << nilai[4] << endl;

    nilai [2]= 10;
    cout << "merubah nilai " << endl;
    cout << &nilai[0] << " nilai inde ke- " << nilai[0] << endl;
    cout << &nilai[1] << " nilai inde ke- " << nilai[1] << endl;
    cout << &nilai[2] << " nilai inde ke- " << nilai[2] << endl;
    cout << &nilai[3] << " nilai inde ke- " << nilai[3] << endl;
    cout << &nilai[4] << " nilai inde ke- " << nilai[4] << endl;

    // mengetahui panjang array 


    cout << "mengetahui panjang array  " << endl;
    cout << "ukuran array " << sizeof(nilai) << " byte " << endl;
    cout << "jumlah array " << sizeof(nilai)/ sizeof(int) << endl;

    return 0;

}