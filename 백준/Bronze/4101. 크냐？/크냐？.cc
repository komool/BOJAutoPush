#include <iostream>

using namespace std;

int main()
{
	int a, b;
	string result;
	while (true)
	{
		cin >> a >> b;
		a > b ? result = "Yes" : result = "No";
		if (a == 0 && b == 0)
			break;
		cout << result << "\n";
	}

	return 0;
}