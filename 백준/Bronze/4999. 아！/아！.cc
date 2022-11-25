#include <iostream>

using namespace std;

int main()
{
	string a, b, result;
	cin >> a >> b;
	a.length() >= b.length() ? result = "go" : result = "no";
	cout << result;

	return 0;
}