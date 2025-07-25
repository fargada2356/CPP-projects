#include <iostream>

using namespace std;

int main() {
    int choice;
    
   cout << "Choose a difficulty (1 = Easy, 2 = Normal, 3 = Hard): ";
   cin >> choice;
   
   switch (choice) {
       
       case 1:
       cout << "You chose Easy difficulty!";
       break;
       
       case 2:
       cout << "You chose Normal difficulty!";
       break;
       
       case 3:
       cout << "You chose Hard difficulty!";
       break;
       
       default:
       cout << "\nInvalid difficulty, please choose the relevant difficulty!\n";
   }
}