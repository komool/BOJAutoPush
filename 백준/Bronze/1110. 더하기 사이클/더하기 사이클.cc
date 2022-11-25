#include <iostream>

using namespace std;

int main()
{
	int n;
	int a, b;
	int sum = 0, c = 0, count = 0;
	cin >> n;
	c = n;

	while (true)
	{
		a = c / 10;
		b = c % 10;
		sum = a + b;
		if (sum > 9)
			sum %= 10;
		c = (b * 10) + sum;
		count++;

		if (c == n)
			break;
	}
	cout << count;

	return 0;
}