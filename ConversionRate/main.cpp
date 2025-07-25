#include <iostream>

using namespace std;

int main() {
    
    double euros;
    const double conversion_rate = 1.17;
    
    cout << "Please enter amount in euros: ";
    cin >> euros;
    
    double dollars = euros * conversion_rate;
    
    cout << "Your amount of euros in dollars is " << dollars << endl;
    
    
    
}
    
  