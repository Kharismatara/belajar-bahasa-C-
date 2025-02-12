#include <iostream>
using namespace std;

int main(){
    // penggunaana countinu dan break pada for

//penggunaan break pada for 
cout << "PENGGUNAAN BREAK PADA FOR \n";
for (int  i = 0; i <=10; i++)
{
    if (i==5)
    {
        break;
        
    }
    cout << "nilai ke i -"  << i<< endl;
}

cout << endl << endl;
cout << "PENGGUNAAN CONTINUE PADA FOR \n";
for (int  i = 0; i <=10; i++)
{
    if (i==5)
    {
        continue;
    }
    cout << "nilai ke i -"  << i<< endl;
}
cout << endl << endl;
cout << "PENGGUNAAN CONTINUE PADA WHILE  \n";
int i =0;
while (i<=10){
i++;

    if (i == 5 )
    {
       break;
    }
     cout << "nilai ke i-" << i << endl;
    
}
cout << endl << endl;
cout << "PENGGUNAAN  BREAK PADA WHILE  \n";

while (i<=10){
i++;

    if (i == 5 )
    {
       continue;
    }
     cout << "nilai ke i-" << i << endl;
    
}


return 0;
}
