#include <iostream>

using namespace std;

int main() {
    
    const int under_age {13};
    const int senior_age{65};
    int age;
    
    const double child_price{5.0};
    const double adult_price{10.0};
    const double senior_price{7.0};
    
    cout << "Enter your age: ";
    cin >> age;
    
    
    if (age < under_age) 
        cout << "Your ticket is gonna cost you " << child_price << "$";
    
    else if (age < senior_age) 
        cout << "Your ticket is gonna cost you " << adult_price << "$";
    
    else
        cout << "Your ticket is gonna cost you " << senior_price << "$";
    
    return 0;
    
}
