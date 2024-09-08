// 18. Print numbers with their prime factors
#include <iostream>
#include<cmath>
using namespace std;

bool isPrime(int num) {
    if (num <= 1) {
        return false;
    }
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            return false;
        }
    }
    return true;
}

void primeFactors(int n) {
    cout << n << " = ";

    // Handle the case of 2
    while (n % 2 == 0) {
        cout << 2 << " ";
        n /= 2;
    }

    // Handle odd numbers
    for (int i = 3; i <= sqrt(n); i += 2) {
        while (n % i == 0) {
            cout << i << " ";
            n /= i;
        }
    }

    if (n > 2) {
        cout << n;
    }

    cout << endl;
}

int main() {
    int n;

    cout << "Enter a number: ";
    cin >> n;

    primeFactors(n);

    return 0;
}