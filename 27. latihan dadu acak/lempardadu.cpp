#include <iostream>
using namespace std;
//fungsi untuk random 
#include <cstdlib>


//cara main 
/* 1. kita lempar 10 
   2. jika jawab y maka nilai akan keluar
   3. jika jawab n akan selesai dan mucul pertanyaan lagi 
   4. jika jawab selain n/y maka nilainya "warning " */

   int main(){

    char lanjut;
    cout << "HAI SELAMAT DATANG DI LEMPAR DADU MBK TR " << endl;

    while (true)
    {
        cout << "lempar dadu ? tuliskan y/n ";
        cin>> lanjut;

       if (lanjut == 'y')
       {
        // karena nilai random itu long
        // lalu jika mau jadi int pingin yang dadu kan 1-6 
        // maka kita modulus 6
        // nanti sisanya akan menjadi nilai int 
        cout << 1+(rand() % 6) << endl;

       } else if ( lanjut == 'n')
       {
        cout << "pemograman selesai" <<endl;
       break;
       } else
       {
        cout << "perintah yang ada masukan salah kakak"<< endl;
       }
       
       
       
    }
    

    return 0;
   }