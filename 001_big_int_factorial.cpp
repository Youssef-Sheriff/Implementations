#include <bits/stdc++.h>

using namespace std;

const int MAX = 1e5 + 2;

int multiply(int sz, int arr[], int value) {
    int carry = 0;
    for (int i = 0; i < sz; ++i) {
        int product = arr[i] * value + carry;
        arr[i] = product % 10;
        carry = product / 10;
    }
    while (carry) {
        arr[sz] = carry % 10;
        carry /= 10;
        sz++;
    }
    return sz;
}

void factorial(int value) {
    int arr[MAX];
    int sz = 1;
    arr[0] = 1;
    for (int i = 2; i <= value; ++i) {
        sz = multiply(sz, arr, i);
    }
    for (int i = sz - 1; i >= 0; --i) {
        cout << arr[i];
    }
    puts("\n");
}

int main() {
#ifndef ONLINE_JUDGE
    freopen("Input.txt", "r", stdin);
    freopen("Output.txt", "w", stdout);
#endif

    factorial(1000);
    return 0;
}