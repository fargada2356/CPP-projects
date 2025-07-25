#include <iostream>

using namespace std;

int main() {
    
    cout << "\nWelcome to Book Reading Time Estimator!\n";
    
    double pages;
    double perhour;
    double reading_time;
    
    cout << "\nHow many pages are in the book? ";
    cin >> pages;
    
    cout << "How many pages can you read per hour? ";
    cin >> perhour;
    
    reading_time = pages / perhour;
    
    cout << "It will take you approximately " << reading_time << " hours to complete the book. " << endl;
    
    return 0;
        
}