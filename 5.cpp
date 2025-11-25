#include <iostream>
#include <climits>
using namespace std;

int main() {
    
int N;
cin >> N;
int min_val = INT_MAX;
int max_val = INT_MIN;


for (int num = 0; num < N; num++)
{
 int x;
 cin >> x;

 if (x < min_val)
 {
    min_val = x;
 }

 if (x > max_val)
 {
   max_val = x; 
 }
    
}

cout << min_val << " ";
cout << max_val << " ";


    return 0;
}