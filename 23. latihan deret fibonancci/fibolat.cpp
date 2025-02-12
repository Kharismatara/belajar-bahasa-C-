// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

int main() {
    // membuat deret fibonanci 
    // apasih fibonanci 
    // fibonancci merupakan deret angka yang dimulai dari 0 dan 1, dan setiap angka berikutnya merupakan hasil penjumlahan dua angka sebelumnya
    //      1,1,2,3,5,8,13,21,34,.....
    
    // hal pertama 
    //   rumus   f(n)= f(n-1)+ f(n-2)
    // rumus  f(n) = fn1 + fn2
    //bagaimana perulangannya 
    
 //dalam  permbuatan perulangana hal pertama adalah kita
    //  1. inisiasi terlebih dahulu 
    //  2. perulanganan menggukan for 
    // --> inisiani, kondisi, increment 
     int f_n, f_n1, f_n2, n ;
    
    cout << " HALLO SELAMAT DATANG DI DERET FIBONANCCI MBK TR" <<endl;
    cout << "masukan nilai n =  ";
    cin >> n ;
    
   
    
    //kenapa i<=1 , i bilangan terkecil ya 
    f_n1 = 1;
    f_n2 = 0;
    cout << f_n1 << endl ;
    for( int i=1; i<n; i++ ){
        f_n = f_n1 + f_n2;
        f_n2 = f_n1;
        f_n1 =f_n;
        cout << f_n << endl; 
    }
    
    
    

    return 0;
}