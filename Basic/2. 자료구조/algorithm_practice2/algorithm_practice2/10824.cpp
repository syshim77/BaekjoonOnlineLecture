#include <iostream>
#include <math.h>
using namespace std;

int main()
{
	long long a, b, c, d;
	long long pb, pd;
	long long sum1, sum2;
	double cnt1 = 1;
	double cnt2 = 1;

	cin >> a >> b >> c >> d;

	pb = b;
	while (1)
	{
		pb /= 10;

		if (pb == 0)
			break;
		else
			cnt1++;
	}

	pd = d;
	while (1)
	{
		pd /= 10;

		if (pd == 0)
			break;
		else
			cnt2++;
	}

	sum1 = a*(int)pow(10.0, cnt1) + b;
	sum2 = c*(int)pow(10.0, cnt2) + d;

	cout << sum1 + sum2 << endl;

	return 0;
}