#include <iostream>
using namespace std;


double luas( double lebar, double panjang){
    double luas = lebar * panjang;
    return luas;
}
double keliling(double lebar, double panjang){
    double keliling = 2 *( lebar+ panjang);
    return keliling;

}
int tampilkan( double lebar, double panjang){
    cout << "luasnya adalah = ";
    cout << luas(lebar, panjang ) << endl;

    cout << "kelilin adalah = ";
    cout << keliling(panjang, lebar);
   
}
 

int main(int argc, char const *argv[])
{
    int panjang, lebar, hasil;
    cout << "masukan nilai l = ";
    cin>> lebar; 
    cout << "masukan nilai p= ";
    cin >> panjang;

    tampilkan(lebar, panjang);
   

    

    return 0;
}
