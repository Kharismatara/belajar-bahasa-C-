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
    char artimatika;

    cout << "=======SELAMAT DATANG DALAM CACULATOR INI====== \n \n";
    cout << "masukan nilai pertama = ";
    cin >> a;
    cout << "pilih operator + - * / = ";
    cin >> artimatika;
    cout << "masukan nilai kedua =  ";
    cin >> b; 


    if (artimatika == '+' )
    {
       hasil = a+b; 
    } else if (artimatika == '-' )
    {
        hasil = a-b; 
    } else if (artimatika == '*' )
    {
         hasil = a*b; 
    } else if (artimatika == '/')
    {
        hasil = a/b ;
    } else
    {
        cout << "nilai inputan operasi salah \n ";
    }

    cout << "Hasil = " << hasil << endl;
    cout<< "TERIMKASIH SUDAH MENCOBA CALUTAOR INI " << endl;
    
    
    
    
    



cin.get();
}