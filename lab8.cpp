#include <iostream>
using namespace std;

int main ()
{  int n = 10;

 // Prompt the user to input an integer for n
 cout << "\nHow many times should I print?" << endl;
  
 cin >> n;
  
 // Define an int variable named i initialized to 1
int i = 1;
 // Write a while loop that will loop as long as the value of i <= n
 while (i <= n ) 
 {
 // Output i, a space, “I love Computer Science!!”, newline
   cout << i << " I love Computer Science!!\n";
 // Increment i
 i++;
 } 
  
 // Output “Printed this message n times.”
 cout << "Printed this message "; cout << n << " times.\n";

 return 0;
} 
