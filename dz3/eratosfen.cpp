#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int k;
    cin >> k;
    int i, j, x;
    for (i = 2; i < k; i++) {
        x = 1;
        for (j = 2; j < i; j++) {
            if (!(i % j)) 
            { 
                x = 0;
                break;
            };
        }
        if (x == 1) cout << j << endl;
    }
    return 0;
}