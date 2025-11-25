#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int findGCD(int a, int b) {
    if (a == 0)
        return b;
    return findGCD(b % a, a);
}

int main() {
      
    int a = 25;
    cin >> a;
    int b = 10;
    cin >> b;
    int g = findGCD(a, b);

    cout << g << endl;

    return 0;
}