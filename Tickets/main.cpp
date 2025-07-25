#include <iostream>

using namespace std;

int main() {
    
    int tickets;
    
    double ticketPrice = 12.50;
    double total;
    
    cout << "Please enter the amount of tickets: ";
    cin >> tickets;
    
    total = ticketPrice * tickets;
    
    cout << "The total cost of tickets will be " << total << endl;
    
    return 0;
    
    
    
}