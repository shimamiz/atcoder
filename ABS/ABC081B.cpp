#include<iostream>

using namespace std;

int main()
{

    int n;
    cin >> n;

    int a[n];
    int tmp_a;
    for (int i = 0; i < n; i++) {
    cin >> tmp_a;
    if (tmp_a % 2 != 0) {
        cout << 0 << endl;
        return (0);
    }
    a[i] = tmp_a;
    }
    int count = 0;
    int check = 0;
    while (check == 0) {
        for (int i = 0; i < n; i++) {
            if (a[i] % 2 == 0) {
                a[i] /= 2;
            }
            else {
                check = 1;
            }
        }
        if (check == 0) {
            count++;
        }
    }

    cout << count << endl;

    return (0);
}