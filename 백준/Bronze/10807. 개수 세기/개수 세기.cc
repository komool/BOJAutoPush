#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n, m, v, count = 0;
    vector<int> vec;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> m;
        vec.push_back(m);
    }
    cin >> v;
    for (int j = 0; j < n; j++)
    {
        if (v == vec[j])
            count++;
    }
    cout << count;

    return 0;
}