#include <iostream>
using namespace std;

int main(){
    //for looping 
    //stuktur dari for loop, for(inisiasi, kondisi, increment/dec){body ==> yang isinya statment }


    //looping 1
    cout << "LOOPING 1 \n";
    for (int i = 0; i <=10; i++)
    {
        cout << "nilai ke i- "<< i << endl;
    }

    //looping 2 
     cout << "\n LOOPING 2 \n";
     for (int i = 0; i <=10; i+=2)
     {
         cout << "nilai ke i- "<< i << endl;
     }
     
     //looping 3
     cout << "\n LOOPING 3 \n";
      for (int i =1; i >=-10; i--)
     {
         cout << "nilai ke i- "<< i << endl;
     }
     //looping 4
     cout << "\n LOOPING 4 \n";
     int total =0;
      for (int i = 1; i <=10; total +=i, i++)
     {
        
         cout << "nilai ke i " << i << "||" << total << endl;
     }
    
    return 0;



}