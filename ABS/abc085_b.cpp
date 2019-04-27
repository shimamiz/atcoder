#include <iostream>
#include <algorithm>
#include <iterator>
#include <vector>

using namespace std;

int main()
{
    int n;

    cin >> n;
    int x[128];
    fill_n(x, 100, 0);
    for (int i = 0; i < n; i++) {
        int a;
        cin >> a;
        x[a-1] = 1;
    }

    int count = 0;
    for (int i = 0; i < 100; i++) {
        if (x[i] == 1) {
            count++;
        }
    }
    cout << count << endl;

    return (0);
}
