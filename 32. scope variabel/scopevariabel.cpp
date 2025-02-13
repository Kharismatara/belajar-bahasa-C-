#include <iostream>
using namespace std;

/*scope global
--> diluar main 
--> bisa digunakan dimana saja 
*/

/*scope local 
--> didalam  main 
--> bisa digunakan dimana main saja 
*/


//scope global 
int x=10;

// ambil scope global 
int ambil_global(){
    return x;
}

int x_local(){
    int x=5;
    return x;
}
int main(){
cout  << "1. variabel global = " << x <<  endl; 
int x =8; 
cout  << "2. variabel local  = " << x << endl; 
cout  << "3.  ambil variabel global  = " << ambil_global << endl;
cout  << "4. variabel local  = " << x << endl; 
cout  << "5. ambil variabel local   = " << x_local << endl;
cout  << "6. variabel local  = " << x << endl;   
cout  << "7. variabel local  = " << x << endl; 
}