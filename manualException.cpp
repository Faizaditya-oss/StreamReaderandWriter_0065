#include <iostream>
using namespace std;

int main()
{
    try {
        cout << "Selamat Belajar di Prodi TI UMY" <<endl;
        throw 0.5; // melemparkan sebuah intetrger maka
        cout << "Pernyataan tidak akan di eksekusi" <<endl;
    }
    catch (int a) {
        // blok isi akan dieksekusi
        cout << "Pengecualian akan dieksekusi" <<endl;
    }
    catch (...) {
       // jika selain interger maka blok lain akan dieksekusi
       cout << " default eksekusi blok " <<endl;
    }
}