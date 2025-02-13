/*
fungsi rekursif 
rekrusif berasal dari kata rekursien --> pengulangan 
fungsi rekrusif adalah fungsi yang mengulang dirinya sendiri 
memasukan fungsi didalam fungsi 

tidak di sarankan karena muter untuk itu
harusnya ada finite rekursif --> terbatas 
int main(){
main ()
return 
}

*/
 #include <iostream>
 using namespace std;

//fungsi rekursif terbatas 
int pangkat(int a, int b){
    int hasil =a;
    for(int i=1; i<b; i++){
        hasil = hasil *a;
    }
    return hasil ;
}
int pangkatRekurisif(int a, int b ){

    //buat batasan 
    if(b <= 1){
        cout << " akhir dari rekurisif \n";
        return a;
    } else{
        cout << "rekursif" <<endl;
    return a*pangkatRekurisif(a, (b-1));// tidak ada batas 
    }
    
}

 int main(){
    int a;
    int b;

    cout <<"angka: ";
    cin >> a;
    cout << "pangkat: ";
    cin >> b;

    cout << "hasil pangkat: " << pangkat(a,b) <<endl;
    cout << "hasil rekursif : " << pangkatRekurisif(a,b) << endl;
    cin.get();
    return 0;
 }

//ubah looping jadi rekrusif
//3pangkat 6 = "3.3.3.3.3.3.3"
//mengambil perkalin yng dibelakang 

// analoginya 
/*
aada fungsi 2 pangkat 4 (2,4)
fungsi yang pertama dianalogikan (a,b)
rrtuen 2.3 - 2.2 - 2.1 retun a --> finite rekurisfe 


*/
