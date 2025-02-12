#include  <iostream>
using namespace std;



int main(){
    //fn = f(n-1) +f(n-2)
    // fn  = fn1 + fn2
     int n, f_n, f_n1, f_n2;
    cout << "HALLO SELAMAT DATANG DI DERET FIBONANCCI MBK TR" << endl;
    cout << "silakan masukan nilai ke n = " << endl;
    cin >> n;
   
   //didalam fibonancci 
   // 1,1,2,3,5,8
   //fn1 = nilai awal 1 
   //fn2= sebelum fn1
    f_n1 =1; 
    f_n2 =0; 
    cout << f_n1 << endl;

    // 
    for (int i = 0; i <n ; i++)
    {
        f_n = f_n1 + f_n2;
        f_n2= f_n1;
        f_n1= f_n;
        cout << f_n << endl;
    }

    



    cin.get();
    return 0;
}