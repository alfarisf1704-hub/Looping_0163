#include <iostream>
#include <ctime>
using namespace std;

int main()
{
    int x;

    cout << "PERULANGAN FOR" << endl;
    for (int i = 0; i <= 4; i++)
    {
        cout << "TEKNOLOGI INFORMASI UMY" << endl;
    }
    cout << endl;
    srand(time(0));

    cout << "PERULANGAN WHILE" << endl;
    x = 1 + rand() % 10;
}