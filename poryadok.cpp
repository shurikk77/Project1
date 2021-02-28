#define _USE_MATH_DEFINES
#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    setlocale(0, "");
    int N, i;
    cin >> N;
    cout << endl;
    if (N <= 0)
    {
        cout << "N ne natural'noe";
    }
    else
    {
        for (i = N; i < N + 10; i++)
        {
            cout << i << " ";
        }
    }
    return 0;
}