#include <iostream>

using namespace std;

int main() {
    
   const int lev_value{100};
   const int st50_value{50};
   const int st20_value{20};
   const int st10_value{10};
   const int st5_value{5};
   const int st2_value{2};
   const int st1_value{1};
   
   int change_amount{};
   
   cout << "Please enter an amount in stotinki: ";
   cin >> change_amount;
   
   int balance{}, lev{}, st50{}, st20{}, st10{}, st5{}, st2{}, st1{}, stotinki{};

   lev = change_amount / lev_value;
   balance = change_amount - (lev * lev_value); 
   
   st50 = change_amount / st50_value;
   balance -= change_amount - (st50 * st50_value);

   st20 = change_amount / st20_value;
   balance -= change_amount - (st20 * st20_value);

   st10 = change_amount / st10_value;
   balance -= change_amount - (st10 * st10_value);
  
   st5 = change_amount / st5_value;
   balance -= change_amount / (st5 * st5_value);

   st2 = change_amount / st2_value;
   balance -= change_amount / (st2 * st2_value);
   
   st1 = change_amount / st1_value;
   balance -= change_amount / (st1 * st1_value);
   
   stotinki = balance;
   
   
   cout << "\nThis is how it displays: " << endl;
   
   cout << "lev is : " << lev << endl;
   cout << "50 stotinki is : " << st50 << endl;
   cout << "20 stotinki is : " << st20 << endl;
   cout << "10 stotinki is : " << st10 << endl;
   cout << "5 stotinki is : " << st5 << endl;
   cout << "2 stotinki is : " << st2 << endl;
   cout << "1 stotinka is : " << st1 << endl;
   
    cout << endl;
    return 0;
}