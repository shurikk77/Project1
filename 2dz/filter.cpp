#include <iostream>
#include <string>
#include <fstream> // подключаем библиотеку
using namespace std;

int main()
{
  string path = "test.txt";
  ifstream file;
  file.open(path);
  if (!file.is_open())
  {
    cout << "cant open";
  }
  else
  {
    cout << "opened" << endl;
    char ch;
    while (file.get(ch))
    {
      if (( ch >= '0')&&( ch <= '9'))
      {
        cout << ch;
      }
    }
  }
  file.close();
  return 0;
}
