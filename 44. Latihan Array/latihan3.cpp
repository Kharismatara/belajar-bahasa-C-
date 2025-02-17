#include <iostream>
using namespace std;

int main() {
    float nilai[5] = {89.5, 76.8, 92.3, 81.0, 87.4}; // Data nilai
    float total = 0.0, rata_rata;
    int length = sizeof(nilai) / sizeof(int);

    cout << "Daftar Nilai Mahasiswa:\n";
    
    // Loop untuk menampilkan nilai dan menghitung total
    for (int i = 0; i < 5; i++) {
       

        cout << "Nilai ulangan ke-" << i+1 << ": "<< nilai[i] <<endl;
        total += nilai[i];
    }

   //tampilkan panjang array 
   cout << "panjang array : " << length;
    // Menghitung rata-rata
    rata_rata = total / length;

    cout << "\nRata-rata nilai: "  << total << "/ " << length << "=" << rata_rata << endl;

    return 0;
}
