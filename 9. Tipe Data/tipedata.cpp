
#include <iostream>
using namespace std;
#include <limits>


int main() {
    //==== ++++++ TIPE DATA BILANGAN BULAT  ==== ++++++
    //1. INT 
    //2. LONG 
    //3. SHORT 
    // agar tidak memiliki nilai + ataupun minus maka nilainya pasti unsigned
    //==== 1. tipe data integer --> 32 BIT =====
    cout << "===================================================================" << endl;
    cout <<  " ==== TIPE DATA INT ==== " << endl;
    int a = 1; 
    cout << a << endl;
    //untuk mengetahui besarnya nilai a 
    cout << sizeof(a) << " byte " << endl;
    //untuk mengetahui nilai masimum 
    cout << "Nilai Maksimum int: " << numeric_limits<int>::max() << endl;
    cout << "Nilai Minimum int: " << numeric_limits<int>::min() << endl;

    //===================================================================
    //==== 2. tipe data LONG 

    cout << "=================================================================== "<< endl;
    cout <<  " ==== TIPE DATA LONG  ==== " << endl;
    long b  = 2; 
    cout << b << endl;
    //untuk mengetahui besarnya nilai b
    cout << sizeof(b) << " byte " << endl;
    //untuk mengetahui nilai masimum 
    cout << "Nilai Maksimum long: " << numeric_limits<long>::max() << endl;
    cout << "Nilai Minimum long : " << numeric_limits<long>::min() << endl;

    //===================================================================
    //==== 3. tipe data short 
    cout << "=================================================================== "<< endl;
    cout <<  " ==== TIPE DATA SHORT   ==== " << endl;
    short c  = 2; 
    cout << c << endl;
    //untuk mengetahui besarnya nilai b
    cout << sizeof(c) << " byte " << endl;
    //untuk mengetahui nilai masimum 
    cout << "Nilai Maksimum short: " << numeric_limits<short>::max() << endl;
    cout << "Nilai Minimum short: " << numeric_limits<short>::min() << endl;

    // ==== ++++++ TIPE DATA BILANGAN PECAHAN   ==== ++++++
    // 1. FLOAT 
    // 2. DESIMAL 

    //===================================================================
    //==== 1. tipe data flaot
    cout << "=================================================================== "<< endl;
    cout <<  " ==== TIPE DATA FLOAT  ==== " << endl;
    float d  = 2.5; 
    cout << d << endl;
    //untuk mengetahui besarnya nilai b
    cout << sizeof(d) << " byte " << endl;
    //untuk mengetahui nilai masimum 
    cout << "Nilai Maksimum float: " << numeric_limits<float>::max() << endl;
    cout << "Nilai Minimum float : " << numeric_limits<float>::min() << endl;

    //===================================================================
    //==== 1. tipe data double
    cout << "=================================================================== "<< endl;
    cout <<  " ==== TIPE DATA DOUBEL  ==== " << endl;
    double e  = 5.89; 
    cout << e << endl;
    //untuk mengetahui besarnya nilai b
    cout << sizeof(e) << " byte " << endl;
    //untuk mengetahui nilai masimum 
    cout << "Nilai Maksimum doubel: " << numeric_limits<double>::max() << endl;
    cout << "Nilai Minimum doubel: " << numeric_limits<double>::min() << endl;

 // ==== ++++++ TIPE DATA BILANGAN CARAKTER    ==== ++++++
    // 1. Charakter --> 1 bit 

    //==== 1. tipe data charakter 
    cout << "=================================================================== "<< endl;
    cout <<  " ==== TIPE DATA CHAR  ==== " << endl;
    char f  = 'a'; 
    cout << f << endl;
    //untuk mengetahui besarnya nilai b
    cout << sizeof(f) << " byte " << endl;
    //untuk mengetahui nilai masimum 
    cout << "Nilai Maksimum char: " << numeric_limits<char>::max() << endl;
    cout << "Nilai Minimum char: " << numeric_limits<char>::min() << endl;


    // ==== ++++++ TIPE DATA BILANGAN BOOLEHAN    ==== ++++++
    cout << "=================================================================== "<< endl;
    cout <<  " ==== BOOLEHAN   ==== " << endl;
    cout << "=================================================================== "<< endl;
    cout <<  " OUTPUTNYA TRUE DAN FALSE " << endl;
    // 1. BOOL 
    //true 
    //false 
    
    return 0; 

}