#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
 
    int s = 0;
    /*int m = 37;
    int j = 3;
    int c = 64;*/
     int m = 25173;
    int j = 13849;
    int c = 65537; 
    cout << "s(0) = 0" << endl;
    for (int i = 1; i <= j+1; i++)
    {
        s = (m * s + i) % c;
        cout << "s(" << i << ") = " << s << endl;
    }
    return 0;
}