#include <iostream>
#include <math.h>

using namespace std;

int main(int argc, char const *argv[])
{
    float V, I, R;

    cout << "Arus Listrik" << endl;
    cout << "Masukkan Tegangan (V)  : ";
    cin >> V;
    cout << "Masukkan Hambatan (R)  : ";
    cin >> R;

    I = V / R;
    cout << "Nilai Arus Listrik = " << I << endl;
    cout << "\n";

    cout << "Tegangan" << endl;
    cout << "Masukkan Arus Listrik (I)  : ";
    cin >> I;
    cout << "Masukkan Hambatan (R)  : ";
    cin >> R;

    V = I * R;
    cout << "Nilai Tegangan = " << V << endl;
    cout << "\n";

    cout << "Nilai Hambatan" << endl;
    cout << "Masukkan Tegangan (V)  : ";
    cin >> V;
    cout << "Masukkan Arus Listrik (I)  : ";
    cin >> I;

    R = V / I;
    cout << "Nilai Hambatan = " << R << endl;

    return 0;
}
