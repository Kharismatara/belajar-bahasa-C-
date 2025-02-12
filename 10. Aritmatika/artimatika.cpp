#include <iostream>
using namespace std;


int main(){

// OPERATOR YANG DIGUNAKAN 
//1. PENJUMLAHAN 
//2. PENGURUANGAN 
//3. PERKALIAN 
//4. PEMBAGIAN 
//5. MODULUS 
//====NOTE=== 
//jika ingin mendapatkan nilai float maka nilai salah satu harus float 
// dan hasil juga float 

// tapi modulus tidak bisa float 

int a = 10;
int b = 3;

int hasil;

cout << "=== OPERATOR PENJUMLAHAN ==" << endl;
hasil = a + b ;
cout << a << " + " << b << " = " << hasil << endl;

cout << endl;

cout << "=== OPERATOR PENGURANGAN  ==" << endl;
hasil = a - b ;
cout << a << " - " << b << " = " << hasil << endl;

cout << endl;

cout << "=== OPERATOR PERKALIAN  ==" << endl;
hasil = a * b ;
cout << a << " *  " << b << " = " << hasil << endl;
cout << endl;

cout << "=== OPERATOR PEMBAGIAN   ==" << endl;
hasil = a / b ;
cout << a << " / " << b << " = " << hasil << endl;

cout << endl;

cout << "=== OPERATOR MODULUS   ==" << endl;
hasil = a % b ;
cout << a << " % " << b << " = " << hasil << endl;
}
