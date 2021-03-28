#include <iostream>
#include <string>
#include <fstream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Rus");
    ofstream fout("file.txt");
    int v[10];
    for (int i = 0; i < 10; i++)
    {
        cin >> v[i];
    }
    for (int i = 0; i < 10; i++)
    {
        cout << v[i] << " ";
    }
    for (int i = 0; i < 10; i++)
    {
        fout << v[i] << " ";
    }
    fout.close();
    cout << endl;
    int sum = 0;
    ifstream fin("file.txt");
    for (int i = 0; i < 10; i++)
    {
        sum = sum + v[i];
    }
    cout << sum;
    return 0;
}
	