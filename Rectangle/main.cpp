#include <iostream>

using namespace std;

int main() {
    
    int width;
    int height;
    
    double calculate_area;
    double perimeter;
    
    cout << "Please provide the width: ";
    cin >> width;
    
    cout << "Please provide the height: ";
    cin >> height;
    
    calculate_area = width * height;
    perimeter = 2 * (width + height);

    cout << "\nThe perimeter of the rectangle is: " << perimeter << endl;
    cout << "The area of the rectangle is: " << calculate_area << endl;

    
    return 0;
    
    
    
}