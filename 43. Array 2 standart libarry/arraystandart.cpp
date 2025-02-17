#include <iostream>
#include <array>
using namespace std;



int main(){
    // membuat array dengan standart libarry 
    
    
    // array<int, jumlah> nama array
    //penulisan
    array <int,5> nilai;
    //perulangan 
    for (int i = 0; i <=4 ; i++)
    {
        nilai[i]= i;
        cout << "nilai [" << i << "] = " << nilai[i];
        cout << "address : " << &nilai << endl; 
    }

    //ukuran 
    cout << "ukuran :  " << nilai.size() << endl;
    // adress awal
    cout << "address awal : " << nilai.begin() << endl;
    // adress akhir 
    cout << "address akhir : " << nilai.end() << endl;
    //nilai index
    cout << "nilai index : " << nilai.at(3) << endl;


    



    return 0;
}