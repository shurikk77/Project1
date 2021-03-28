#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
   string a;
    cin >> a;
    ofstream file("goddamn.txt");
    file << 1;
    file.close();
    string path = "goddamn.txt";
    ifstream fin;
    fin.open(path);
    char ch;
    int sum = 0;
    while (fin.get(ch))
      {
        sum = sum + ch;
        cout << sum;
      }
    fin.close();
    return 0;
}
