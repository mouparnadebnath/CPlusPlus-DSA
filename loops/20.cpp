// 2. Calculate sum of numbers from 1 to n using nested loops
#include <iostream>

using namespace std;

int main() {
    int n;

    cout << "Enter the value of n: ";
    cin >> n;

    int sum = 0;

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            sum += j;
        }
    }

    cout << "Sum of numbers from 1 to " << n << " is: " << sum << endl;

    return 0;
}
