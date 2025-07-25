#include <iostream>

using namespace std;

int main() {
    
    int speed_limit {0};
    int speed_kmh {0};
    int fine{0};
    
    std::cout << "Enter your speed in km/h: ";
    std::cin >> speed_kmh;
    
    std::cout << "Enter the speed limit: ";
    std::cin >> speed_limit;
    
    if (speed_kmh <= speed_limit) {
        cout << "You are within the right speed limit. No fine!\n";
    }    
 else if (speed_kmh - speed_limit <= 10) {
       fine = 20;
        cout << "You are slightly overpassing the speed limit. Small fine will be applied!\n";
        cout << "The fine is "<< fine << "BGN";
        
} else if (speed_kmh - speed_limit <= 20) {
       fine = 50;
        cout << "You are overpassing the speed limit. Moderate fine will be applied!\n";
        cout << "The fine is "<< fine << "BGN";
        
} else {
        fine = 100;
        cout << "You overpassed the speed limit. Large fine will be applied!\n";
        cout << "The fine is "<< fine << " BGN";
    

}

return 0;
    
}
