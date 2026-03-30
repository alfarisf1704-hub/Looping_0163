#include <iostream>
using namespace std;

// DEKLARASI VARIABLE GLOBAL
int kodeJurusan;
string namaJurusan;
string statusKota;

// prosedur input
void input()
{
    cout << "===PENDAFTARAN JURUSAN KAMPUS===" << endl;
    cout << "1.Teknologi Informasi" << endl;
    cout << "2.Teknik Elektro" << endl;
    cout << "3.Sistem Informasi" << endl;
    cout << "--------------------------------" << endl;
    cout << "---Masukan Kode Jurusan (1-3): ";
    cin >> kodeJurusan;
}