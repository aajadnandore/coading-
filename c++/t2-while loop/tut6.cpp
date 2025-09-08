#include<bits/stdc++.h>
using namespace std;
int main(){
        int n;
        cout << "Enter a number: ";
        cin >> n;
        
        int sum = 0;   // Sum of even digits
    
        while (n != 0) {
            int ld = n % 10;   // Extract last digit
            n = n / 10;   // Remove last digit
    
            if (ld % 2 == 0) {   // Check if digit is even
                sum += ld;
            }
        }
    
        cout << "Sum of even digits: " << sum << endl;
        if(sum==0) cout<<"Not a even number";
    
return 0;
}