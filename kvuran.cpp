#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    setlocale(0, "");
    double a, b, c;
    cout << "¬ведите a = ";
    cin >> a;
    cout << endl;
    cout << "¬ведите b = ";
    cin >> b;
    cout << endl;
    cout << "¬ведите c = ";
    cin >> c;
    cout << endl;

    double D = b * b - 4 * a * c;
    if ((a == 0) && (b == 0))
    {
        cout << "”словие задано неверно";
    }
    else if (D < 0)
    {
        cout << "ƒискриминант меньше нул€";
    }
    else if (D == 0)
    {
        cout << "x = " << -b / (2 * a);
    }
    else if (a == 0)
    {
        cout << "x = " << -c / b;
    }
    else
    {
        cout << "x1 = " << (-b + sqrt(D)) / (2 * a);
        cout << "x2 = " << (-b - sqrt(D)) / (2 * a);
    }

    system("pause");

    return 0;
}