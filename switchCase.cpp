#include <iostream>
using namespace std;

// DEKLARASI VARIABLE GLOBAL
int kodeJurusan;
string namaJurusan;
string statusKuota;

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

// prosedur untuk pengecekan kondisi
void pilihanJurusan()
{
    switch (kodeJurusan)
    {
    case 1:
        namaJurusan = "Teknologi Informasi";
        statusKuota = "Tersedia (15 kursi)";
        break;
    case 1:
        namaJurusan = "Teknik Elektro";
        statusKuota = "Kuota Penuh!";
        break;
    case 1:
        namaJurusan = "Sistem Informasi";
        statusKuota = "Tersedia (5 kursi)";
        break;
    default:
        namaJurusan = "Tidak Diketahui";
        statusKuota = "Error: Kode tidak valid";
        break;
    }
}