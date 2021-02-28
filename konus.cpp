#define _USE_MATH_DEFINES
#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    setlocale(0, "");
    double r, R, l, h;
    cout << "¬ведите r = ";
    cin >> r;
    cout << endl;
    cout << "¬ведите R = ";
    cin >> R;
    cout << endl;
    cout << "¬ведите h = ";
    cin >> h;
    cout << endl;
    if (sqrt(pow(h, 2) + pow(R - r, 2)) < 0)
    {
        cout << "Podkorennoe < 0";
    }
    else
    {
        l = sqrt(pow(h, 2) + pow(R - r, 2));
    }
    cout << "V = " << 1 / 3 * M_PI * h * (pow(R, 2) + R * r + pow(r, 2)) << endl;
    cout << "S = " << M_PI * (pow(R, 2) + (R + r) * l + pow(r, 2));
    return 0;
}