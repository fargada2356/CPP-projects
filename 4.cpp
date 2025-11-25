#include <iostream>
#include <cmath>
using namespace std;

int main() {
    
   double a, b, c;
   cin >> a >> b >> c;

   double discriminant = (b*b - 4*a*c);

   if (discriminant < 0) 
   {
    cout << "no roots" << endl;
   }
   else 
   {
    discriminant = sqrt(discriminant);
   }
   if (discriminant > 0) 
   {
    cout << (-b + discriminant) / (2 * a);
   }

   else {
   
    cout << (-b - discriminant) / (2 * a);
   }

   cout << endl;

    return 0;
}