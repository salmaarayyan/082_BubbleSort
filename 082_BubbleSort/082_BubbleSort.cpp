#include <iostream>
#include <string>
using namespace std;



int arr[20]; //deklarasi variabel global array a dengan ukuran 20
int n;  //deklarasi variabel global n untuk menyimpan banyaknya elemen array

void input() {  //prosedur untuk input

    while (true) {
        cout << "masukan banyaknya elemen pada array : ";  //output ke layar
        cin >> n;  //input dari pengguna
        if (n <= 20)  //jika n kurang dari atau sama dengan 20
            break;
        else {  //jika n lebih dari 20
            cout << "\narray dapat mempunyai maksimal 20 elemen. \n";  //output ke layar
        }
    }

    cout << endl;
    cout << "====================" << endl;
    cout << "masukan elemen array" << endl;
    cout << "====================" << endl;

    for (int i = 0; i < n; i++) {  //looping dengan i dimulai dari 0 hingga n-1
        cout << "data ke-" << (i + 1) << ": ";  //output ke layar
        cin >> arr[i]; 

    }





}
























int main()
{
    std::cout << "Hello World!\n";
}
