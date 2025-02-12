#include <iostream>
using namespace std;



int main() {

    // inrement dan deremenet 
    // ++ dan --
    //preincrement dan post incremeen 
    // ++a || a++

    int a = 5;
    int b = 10; 

    //post increment 
    cout << a << endl; 
    a++;
    cout << a << endl; 


    // post decerement 
    cout << a << endl;
    a--;
    cout << a << endl << endl;


    // preincrement 
    cout << a << endl; 
    ++a;
    cout << a<< endl;


    // predecrement 
    cout << a << endl;
    --a;
    cout << a << endl;


    cout << "PERBEDAANYYAN \n";
    //post increment 
    cout << b << endl; 
   cout << b++ << endl; 
    cout << a << endl; 


    // post decerement 
    cout << b << endl;
   cout << b-- << endl; 
    cout << b << endl << endl;


    // preincrement 
    cout << b << endl; 
  cout << ++b << endl; 
    cout << b<< endl;


    // predecrement 
    cout << b << endl;
   cout << --b << endl; 
    cout << b << endl;

    
    return 0;

}