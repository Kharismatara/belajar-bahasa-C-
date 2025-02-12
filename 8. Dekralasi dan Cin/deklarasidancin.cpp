
#include <iostream>
//menggunakan name space std agar lebih mudah 
using namespace std;

int main() {
    //deklarasi ada dapat masalah saat kita complie nilai tidak muncul 
    //karena c++ tidak mengetahuinya 
    //maka iku butuh bantuan 
    
    int a; 
    a = 1;
    // untuk menampilkan 
    cout  << a << endl;

    //menggunakan cin untuk membuatan inputan yang dimasukan 
     cout << "Masukan nilai anda = " ;
    int b; 
    cin >> b;
    cout << "nilai anda  " ;
    cout << b << endl;
}