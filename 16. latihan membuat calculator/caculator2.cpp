#include <iostream>
using namespace std;

/*
=== CARA MEMBUAT CACULATOR DENGAN IF ELSE ===
1. INGIN ADA MASUKAN JADI MENGGUNAKAN CIN 
2. LALU MEMBUAT VARIABEL 
A ==> SEBAGAI NILAI PERTAMA 
B ==> NILAI KEDIUA 
OPERASI => +/-*
HASIL => 

*/
int main(){
    float  a,b, hasil;
    int pilihan; 

    cout << " SELAMAT DATANG DI CACULATOR SEDERHANA " << endl;
      cout << "=====================MASUKAN PILIHAN ===========================" << endl;
    cout << "Pilih angka 1 untuk penjumlahan \n";
    cout << "Pilih angka 2 untuk pengurangan  \n";
    cout << "Pilih angka 3 untuk perkalian \n";
    cout << "Pilih angka 4 untuk pembagian  \n";
    cout << "Masukan Pilihan anda "; 
     cin>> pilihan ;

   cout << "=======================MASUKAN NILAI PERTAMA =========================" << endl;
     cout << "masukan nilai  pertama =  " ;
        cin >> a;
     cout << "=====================MASUKAN NILAI KEDUA ===========================" << endl;
        cout << "masukan nilai  kedua =  " ;
        cin >> b;
         cout << "======================HASIL CACULATOR ==========================" << endl;
    

     if (pilihan>=1 && pilihan<=4  )
     {
        switch (pilihan)
        {
        case 1:
            hasil = a+b;
             
            cout << "hasil penjumlahan :  " << a << "+" << b << "=" << hasil << endl;
            break;
         case 2:
            hasil = a - b;
           cout << "hasil penjumlahan :  " << a << "-" << b << "=" << hasil << endl;
            break;
        case 3:
            hasil = a*b;
            cout << "hasil penjumlahan :  " << a << "*" << b << "=" << hasil << endl;
            break;
         case 4:
            hasil = a/b;
          cout << "hasil penjumlahan :  " << a << "/" << b << "=" << hasil << endl;
            break;
        default: 
        cout << "salah menginputakan pilihan ";
            break;
        }
        
     }
     

    
    
    
    
    



cin.get();
}