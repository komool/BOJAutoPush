#include <iostream>
#include <vector>

using namespace std;

int main()
{
	int x, n;
	int sum = 0;
	vector<int> a, b;
	
	cin >> x >> n;
	a.resize(n);
	b.resize(n);
	for (int i = 0; i < n; i++)
	{
		cin >> a[i] >> b[i];
		sum += (a[i] * b[i]);
	}
	x == sum ? cout << "Yes" : cout << "No";

	return 0;
}