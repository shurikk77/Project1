#include <iostream>

using namespace std;
int a;
int signx(sign,int x)
{

  if (x = 0)
  {
    return 0;
  }
  else if (x > 0)
  {
    return 1;
  }
  else if (x < 0)
  {
    return -1;
  }
}
int main(int argc, char* argv[])
{
    int x;
    cout << "Vvedite chislo";
    cin >> x;
    a = signx (x);
    cout << endl << a;
    return 0;
}
