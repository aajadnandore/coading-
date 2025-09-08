#include<bits/stdc++.h>
using namespace std;
int main(){

     int n;
    cout << "Enter a number: ";
    cin >> n;

    if (n <= 1) {  // Handle special cases
        cout << "Neither prime nor composite.";
        return 0;
    }

    bool flag = true;

    for (int i = 2; i <= n / 2; i++) {
        if (n % i == 0) {
            flag = false;
            break;
        }
    }

    if (flag)
        cout << "Prime number.";
    else
        cout << "Composite number.";

return 0;
}