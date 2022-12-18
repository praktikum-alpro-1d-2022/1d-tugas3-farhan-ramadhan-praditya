#include <iostream>
#include <math.h>

using namespace std;

int main(int argc, char const *argv[])
{
    float Praktikum = 75, UTS = 70, UAS = 88, Nilai_Akhir;

    cout << "Nilai Praktikum    = " << Praktikum << endl;
    cout << "Nilai UTS  = " << UTS << endl;
    cout << "Nilai UAS  = " << UAS << endl;

    Nilai_Akhir = (Praktikum * 20/100) + (UTS * 30/100) + (UAS * 50/100);

    cout << "Nilai Akhirnya = " << Nilai_Akhir << endl;

    return 0;
}
