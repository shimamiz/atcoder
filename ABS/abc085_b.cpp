#include <iostream>
#include <algorithm>
#include <iterator>
#include <vector>

using namespace std;

int main()
{
    int n;

    cin >> n;
    int x[n];

    for (int i = 0; i < n; i++) {
        cin >> x[i];
    }

    sort(x, x+n, greater<int>());

}