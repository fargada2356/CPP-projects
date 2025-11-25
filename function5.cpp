#include <iostream>
using namespace std;

int calcPow(int num, int p)
{
    int result = 1;

    while( p-- > 0)
       result *= num;

    return result;
}

int main() {
    
    int number, power;

    cin >> number >> power;

    cout << calcPow(number, power) << endl;

    return 0;
}