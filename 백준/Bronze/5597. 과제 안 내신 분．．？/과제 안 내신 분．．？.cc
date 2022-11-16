#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
	int n = 0;
	vector<int> vec;
	for (int i = 1; i <= 30; i++)
		vec.push_back(i);
	for (int j = 0; j < 28; j++)
	{
		cin >> n;
		vec.erase(remove(vec.begin(), vec.end(), n), vec.end());
	}
	for (int k = 0; k < 2; k++)
		cout << vec[k] << endl;

	return 0;
}