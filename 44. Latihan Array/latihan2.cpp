#include <iostream>
using namespace std;


int main(){
    //membuat array 
    int tinggi[10]= {175, 165, 166, 157, 184, 156, 163, 176, 171, 169};

    // lengt itu sama dengan n 
    int length = sizeof(tinggi)/ sizeof(int);

    int sum =0;

    for (int i = 0; i < length; i++)
    {
        // sum = sum + tinggi 
        sum += tinggi[i];
    }
    

    //mencari rata-rata tinggi badan 
    // rata-rata = sum /leng 

     for (int i = 0; i < 10; i++) {
        cout << "Tinggi ke-" << i + 1 << ": " << tinggi[i] << " cm" << endl;
    }
    

   

    float rata= sum/length;

    cout << "panjang nilianya : " << length << endl;
    cout << "jumlah tinggi : " << sum << endl;
    cout << "rata rata nilai : " << rata <<  endl;
    




    return 0; 
}