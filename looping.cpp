#include <iostream>
#include <ctime>
using namespace std;

int main()
{
    int x;
    // PERULANGAN DENGAN FOR
    // MENCETAK SEBANYAK 5 KALI
    cout << "PERULANGAN FOR" << endl;
    for (int i = 0; i <= 4; i++)
    {
        cout << "TEKNOLOGI INFORMASI UMY" << endl;
    }
    cout << endl;
    // UNTUK MENDAPATKAN URUTAN ANGKA ACAK YANG BERBEDA
    srand(time(0));
    // PERULANGAN DENGAN WHILE
    cout << "PERULANGAN WHILE" << endl;
    x = 1 + rand() % 10;
}