#include <iostream>
using namespace std;

int main()
{
    setlocale(0, "");
    int lampa, shtori, day;
    cout << "������ ����?(1 - ��, 0 - ���)";
    cin >> day;
    cout << endl;
    cout << "����� �������?(1 - �������, 0 - �������)";
    cin >> shtori;
    cout << endl;
    cout << "����� �����?(1 - �����, 0 - �� �����)";
    cin >> lampa;
    cout << endl;
    if ((day == 1) && (shtori == 1))
    {
        cout << "� ������� ������";
    }
    else if (lampa == 1)
    {
        cout << "� ������� ������";
    }
    else
    {
        cout << "� ������� �����";
    }
    return 0;
}
