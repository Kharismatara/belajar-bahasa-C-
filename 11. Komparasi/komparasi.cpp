#include <iostream>
using namespace std;

int main(){
    //KOMPERASI YAITU PEMBANDINGKAN 
    // APA SAJA ? 
    //1. SEBANDING (==)
    //2. TIDAK SEBANDING(!=)
    //3. KURANG DARI (<)
    //4. LEBIH DARI (>)
    //5. KURANG DARI SAMA DENGAN 
    //6. LEBIH DARI SAMA DENGAN 

    //NOTE : TRUE BERNILAI 1 
    //     : FALSE BERNILAI 0


    int a = 2;
    int b = 2;
     bool hasil1, hasil2;

    //1. SEBANDING (==)
    hasil1 = (a == b );
    //2. TIDAK SEBANDING(!=)
     hasil2 = (a != b );
    //3. KURANG DARI (<)
     hasil1 = (a < b );
    //4. LEBIH DARI (>)
     hasil2 = (a > b );
    //5. KURANG DARI SAMA DENGAN 
     hasil1 = (a <= b );
    //6. LEBIH DARI SAMA DENGAN 
     hasil2 = (a >= b );

   


    cout << "=== HASIL === " << endl;
    cout << hasil1 << endl;
    cout << hasil2 << endl;
    


}