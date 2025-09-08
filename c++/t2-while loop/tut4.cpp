#include<bits/stdc++.h>
using namespace std;
int main(){
    
   int n;
   cout<<"enter a number :";
   cin>>n;
   
   int count = 0;  // Initialize count variable to store the number of digits
   while (n != 0) { // Run the loop while n is not zero
       n = n / 10;  // Remove the last digit of n by dividing it by 10
       count++;     // Increase the digit count
   }
   cout << count;   // Print the total number of digits

return 0;
}