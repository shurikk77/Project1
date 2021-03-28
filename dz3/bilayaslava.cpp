#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int i,j,k;
    int b = 49;
    for (int i = 0; i < 49; i++)
    {
        cout << "_";
    }
    cout << endl;
    for (int k = 0; k < 6; k++)
    {
        for (int i = 0; i < 8; i++)
        {
            cout << "* ";
        }
        for (int j = 0; j < 33; j++)
        {
            cout << "_";
        }
        cout << endl;
    }
    for (j = 0; j < 6; j++)
    {
        for (int i = 0; i < 49; i++)
        {
            cout << "_";
        }
        cout << endl;
    }
    return 0;
}