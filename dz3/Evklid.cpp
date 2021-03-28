#include <iostream>
using namespace std;

int NODvichet(int A, int B)
{
	while (A != B)
	{
		if (A > B)
		{
			A = A-B;
		}
		else
		{
			B = B-A;
		}
	}
	return A;
}
int NODdel(int A, int B)
{
	while (A != 0 && B != 0)
	{
		if (A > B)
		{
			A = A % B;
		}
		else {
			B = B % A;
		}
	}
	return A + B;
}
int main()
{
	setlocale(0, "");
	int A, B;
	cout << "A = "; 
	cin >> A;
	cout << "B = "; 
	cin >> B;
	cout << "мнд(" << A << ", " << B << ")=" << NODvichet(A, B) << endl;
	cout << "мнд(" << A << ", " << B << ")=" << NODdel(A, B);
	return 0;
}