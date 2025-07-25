#include <iostream>

using namespace std;

int main() {
   int score {0};
   
   cout << "Enter your exam score (0-100): ";
   cin >> score;
   
   
   if (score >= 90 && score <= 100)
       cout << "You got an A! ";
       
    else if (score >= 80 && score <= 90)
        cout << "You got a B! ";
        
    else if (score >= 70 &&  score <= 80)
        cout << "You got a C! ";
        
   else if (score >= 60 &&  score <= 70)
        cout << "You got a D! ";
        
    else if (score >= 0 && score <= 60)
        cout << "You got a F! ";
        
    else 
        cout << "Invalid score entered! ";
        
       


return 0;

}