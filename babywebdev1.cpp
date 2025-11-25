#include <iostream>

using namespace std;

int main() 
{
    int a = 4242;
    int b = 1313;

    cin >> a >> b;

    if (a > b) 
    {
        swap(a, b);
    }

    cout << a << " " << b << endl;
    return 0;
}