#include <iostream>
#include <cmath>
using namespace std;
double h(const double x);
int main()
{
	double rp, rk, z;
	int n;
	cout << "rp = "; cin >> rp;
	cout << "rk = "; cin >> rk;
	cout << "n = "; cin >> n;
	double dg = (rk - rp) / n;
	double r = rp;
	while (r <= rk)
	{
		z = h(r + 1) + pow(h(r*r + 1), 2) + 1;
		cout << r << " " << z << endl;
		r += dg;
	}
	return 0;
}
double h(const double x)
{
	if (abs(x) >= 1 || x == 0)
		return (cos(x) + 1) / (exp(x));
	else
	{
		double Sum = 0;
		int n = 0;
		double a = 1;
		double S;
		Sum = a;
		do
		{
			n++;
			double R = (x * x )/ (2 * n - 1);
			a *= R;
			Sum *= a;
			S = Sum / sin(x * x);
		} while (n < 6);
		return S;
	}
}