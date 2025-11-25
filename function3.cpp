#include <iostream>
using namespace std;

void printTriangleLine(int l)
{
    for(int c = 1; c <= l; c++)
       cout << c << " " << flush;
       cout << endl;
}

void printTriangle(int n) 
{
    for(int l = 1; l <= n; l++)
        printTriangleLine(l);

    for(int l = n - 1; l >= 1; l--)
        printTriangleLine(l);
}

int main() {
    
   int n;
   cin >> n;

   printTriangle(n);

    return 0;
}