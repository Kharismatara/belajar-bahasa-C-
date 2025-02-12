#include <iostream>
using namespace std;

int main(){
    //membuat segitiga siku siku 
    //  *
    //  **
    //  ***
    //  ****
    //  *****

    //konsepnya  * itu adalah n adalah panjang pola  
    // ada 2 lopping 
    // 1. lopping bawah  i 
    // 2. loppung samping  j 
    // jangan lupa untuk inisiasi
    // loppingnya dari bahwah increment
    //lopping samping juga increment

    int n;
    cout << "MEMBUAT SEGITIGA BERSAMA MBK TR " << endl ;
    cout << " masukan panjang pola \n";
    cin>> n;


   for(int i = 1; i <= n; i++){
		for(int j = 1; j <= i; j++){
			cout << "*" ;
		}
		cout << endl;
	}
    
    

    cin.get();
    return 0;
}