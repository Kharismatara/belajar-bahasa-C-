#include <iostream>
using namespace std;


int main()
{
    string nama[5] = {"Aldi", "Budi", "Citra", "Dewi", "Eka"};

    //menampilkan dengan looping 

    for (int i =0; i<5; i++)
    {
        cout << "Nama Siswa : " << i+1 << ". " << nama[i] << endl;
    }




     char inisial[5] = {'A', 'B', 'C', 'D', 'E'};
     for (int i = 0; i <5; i++)
     {
        cout << "tampikan urutan karater ke-: " << i+1 << ". " << inisial[i] << " address:  " << &inisial << endl;
     }
     
    
    return 0;
}

