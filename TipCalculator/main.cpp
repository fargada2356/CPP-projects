#include <iostream>

using namespace std;

int main() {
        
    double meal_cost;
    double tip_percent;
    double tip_amount;
    double totalcost;
    
    cout << "\nWelcome to the Tip Calculator!\n ";
    
    cout <<  "\nEnter the meal cost: ";
    cin >> meal_cost;
    
    cout << "Enter the tip percentage: ";
    cin >> tip_percent;
    
    tip_amount =  meal_cost * tip_percent / 100;
    totalcost = meal_cost + tip_amount;
    
    cout << "The total cost of your meal + tip is " << totalcost << endl;
    
    return 0;
}

