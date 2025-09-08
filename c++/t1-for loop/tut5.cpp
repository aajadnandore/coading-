#include<bits/stdc++.h>
using namespace std;
int main(){

   int num;
    cout << "Enter a number: ";
    cin >> num;

    cout << "Factors of " << num << " are: ";
    for (int i = 1; i <= num; i++) { // Loop from 1 to num
        if (num % i == 0) { // If i divides num completely
            cout << i << " ";
        }
    }

return 0;
}