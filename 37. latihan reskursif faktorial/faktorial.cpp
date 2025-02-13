#include <iostream>
using namespace std;



//prototype 
int factorial(int n );

int main(){
    int angka, hasil;
    cout << "menghitung faktorial dari : ";
    cin >> angka;

    hasil = factorial(angka);
    cout << " nilai faktorial adalah " << hasil << endl; 

    cin.get();
    return 0;
}
int factorial(int n ){

   if (n<=1)
   {
    cout << n ;
    return n;
   } else
   {
    cout << n << "*";
    return n * factorial(n-1);
   }
   
   
    

  
}



/*
FAKTORIAL 
5! = 5.4.3.2.1   dapat disimpulakn kalau  5! = 5.4! 
4! = 4.3.2.1     dapat disimpulakn kalau  4! = 4.3! 
3!= 3.2.1        dapat disimpulakn kalau  3! = 3.2!
2! = 2.1         dapat disimpulakn kalau  2! = 2.1! 


faktorial => n.(n-1)!
*/