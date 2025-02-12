#include <iostream>
using namespace std;

int main(){
    //membuat segitiga siku siku 
     //         *
    //         **
    //        ***
    //       ****
    //      *****
    //konsepnya  * itu adalah n adalah panjang pola  
    // ada 3 looping 
    //1. untuk spaci kosong 
    //2. unntuk *


    int n;
    cout << "MEMBUAT SEGITIGA BERSAMA MBK TR " << endl ;
    cout << " masukan panjang pola \n";
    cin>> n;


   for(int i = 1; i <= n; i++){
		for(int j = n; j > i; j--){
			cout << " ";
		}
		for(int k =1; k <= (2*i - 1); k++){
			cout << "*";
		}
		cout << endl;
	}
    

    cin.get();
    return 0;
}