#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
	int n = 0;
	cin >> n;
	vector<int> vec(n);
	for (int i = 0; i < n; i++)
	{
		cin >> vec[i];
	}
	sort(vec.begin(), vec.end());
	for (int j = 0; j < n; j++)
	{
		cout << vec[j] << endl;
	}

	return 0;
}