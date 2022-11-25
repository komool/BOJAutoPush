#include <iostream>

using namespace std;

int main()
{
	string point;
	cin >> point;
	if (point == "A+")
		cout << "4.3";
	else if (point == "A0")
		cout << "4.0";
	else if (point == "A-")
		cout << "3.7";
	else if (point == "B+")
		cout << "3.3";
	else if (point == "B0")
		cout << "3.0";
	else if (point == "B-")
		cout << "2.7";
	else if (point == "C+")
		cout << "2.3";
	else if (point == "C0")
		cout << "2.0";
	else if (point == "C-")
		cout << "1.7";
	else if (point == "D+")
		cout << "1.3";
	else if (point == "D0")
		cout << "1.0";
	else if (point == "D-")
		cout << "0.7";
	else if (point == "F")
		cout << "0.0";

	return 0;
}