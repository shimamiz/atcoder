#include <iostream>
#include <algorithm>
#include <iterator>
#include <vector>

using namespace std;

int main()
{
    int n;
    cin >> n;

    int card[n];
    for (int i = 0; i < n; i++) {
        cin >> card[i];
    }

    sort(card, card+n, greater<int>());
    int point = 0;
    for (int i = 0; i < n; i++) {
        if (i % 2 == 0) {
            point += card[i];
        }
        else {
            point -= card[i];
        }
    }

    cout << point << endl;

    return (0);
}