#define _USE_MATH_DEFINES
#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    setlocale(0, "");
    double x;
    for (x = -4; x <= 4; x += 0.5)
    {
        if (x == 1)
        {
            cout << "y(1) = нельзя делить на 0" << endl;
        }
        else
        {
            cout << "y(" << x << ") = " << (pow(x, 2) - 2 * x + 2) / (x - 1) << endl;
        }
    }
    return 0;
}
