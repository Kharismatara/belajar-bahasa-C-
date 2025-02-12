#include <iostream>
using namespace std;


int main(){
    //ada 3 dalam operator logika 
    //1. not (!)
    //2. and (&&)
    //3. or (|| )

    int a = 3;
    int b = 2;
    bool hasil;

    //1. not (!)
    cout << "ini adalah hasil dari operator not \n";
    hasil = (a==3);
    cout << hasil << endl;

    //2. and (&&)
     cout << "ini adalah hasil dari operator and  \n";
     hasil = (a== 3) and (b== 2); // true and true 
     cout << hasil << endl;
     hasil = (a==3) and (b==4); // true and false 
     cout << hasil <<endl;
     hasil = (a==4 ) && (b==2); //false and true 
     cout << hasil << endl;
    hasil = (a==6 ) && (b==8); // false and false 
    cout << hasil << endl;
    //kesimpulan == kedua nilai benar menghasilkan nilai true 

    
    //3. or (|| )
     cout << "ini adalah hasil dari operator OR \n";
     hasil = (a== 3) or (b== 2);  //true or true 
     cout << hasil << endl;
     hasil = (a==3) or (b==4); // true or false 
     cout << hasil <<endl;
     hasil = (a==4 ) || (b==2); // false or true 
     cout << hasil << endl;
    hasil = (a==6 ) || (b==8); // false or false 
    cout << hasil << endl;

    //kesimpulan jika nilai false or false maka false 

}