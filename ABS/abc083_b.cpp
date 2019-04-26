#include<iostream>

using namespace std;
int main()
{
    int n, a, b;
    cin >> n >> a >> b;

    int count = 0;
    for (int i = 1; i <= n; i++) {
        int num = i;
        int sum = 0;
        while (num > 0) {
            sum += (num % 10);
            num /= 10;
        }
        if (sum >= a && sum <= b) {
            count += i;
        }
    }
    cout << count << endl;

    return (0);
}