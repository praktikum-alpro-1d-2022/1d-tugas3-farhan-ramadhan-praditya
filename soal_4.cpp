#include <iostream>
#include <math.h>

using namespace std;

int main(int argc, char const *argv[])
{
    float b = 25, x = 15, c = 20, Y;

    cout << "Selesai kan persamaan berikut Y = bx^2 + 0.5x - c, ";
    cout << "dimana nilai";
    cout << " b = " << b;
    cout << ", x = " << x;
    cout << ", c = " << c << endl;
    cout << "Y = 25(15)^2 + 0.5(15) - 20" << endl;

    Y = (b * x * x) + 0.5 * x - c;
    cout << "Nilai Y adalah = " << Y << endl;

    return 0;
}
