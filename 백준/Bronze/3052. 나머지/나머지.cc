#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
	int count = 0;
	vector<int> a(10);
	for (int i = 0; i < 10; i++)
	{
		cin >> a[i];
	}
	for (int j = 0; j < 10; j++)
	{
		a[j] %= 42;
	}
	sort(a.begin(), a.end());
	a.erase(unique(a.begin(), a.end()), a.end());
	cout << a.size();

	return 0;
}