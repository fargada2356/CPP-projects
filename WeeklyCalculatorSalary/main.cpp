#include <iostream>

using namespace std;

int main() {
    
    cout << "Welcome to the Salary Calculator!\n";


    
    int hours_worked;
    int hourly_rate;
    
    double total_salary;
    
    cout << "How many hours did you work this week? ";
    cin >> hours_worked;
    
    cout << "What is your hourly rate? ";
    cin >> hourly_rate;
    
    total_salary =  hours_worked * hourly_rate;
    
    cout << "You earned " << total_salary << "BGN this week.";
    
    return 0;
    
    
    
}