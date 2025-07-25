#include <iostream>

using namespace std;

int main() {

    int age;
    
    int months;
    int days;
    int hours;
    
    cout << "Please enter your age in years: ";
    cin >> age;
    
    months = age * 12;
    days = age * 365;
    hours = age * 365 * 24;
     
     cout << "Your age in months " << months << endl;
     cout << "Your age in days " << days << endl;
     cout << "Your age in hours " << hours << endl;

    
    
return 0;
    
    

}
