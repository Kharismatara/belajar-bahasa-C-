#include <iostream>
using namespace std;

int kuadrat(int x ){
    int y;
    y = x*x;
    return y;
}



int main(){
    int inputan, hasil;
    cout << "masukanan nilai untuk menjadikan kuadrat";
    cin>> inputan;

    hasil = kuadrat(inputan);
    cout << "hasil dari nilai kuadrat = "<< hasil ;

    cin.get();
    return 0;
}