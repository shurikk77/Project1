#define _USE_MATH_DEFINES
#include <iostream>
#include <math.h>
using namespace std;

int main()
{
	double  x, a;
	cout << "¬ведите X = ";
	cin >> x;
	cout << endl;
	cout << "¬ведите а = ";
	cin >> a;
	cout << endl;
	if (abs(x) < 1)
	{
		if (abs(x) <= 0)
		{
			cout << "|x| cant be <= 0";
		}
		else
		{
			cout << a * log(abs(x));
		}
	}
	else
	{
		if (a - pow(x, 2) < 0)
		{
			cout << "a-x^2 cant be < 0";
		}
		else
		{
			cout << sqrt(a - pow(x, 2));
		}
	}
	return 0;
}