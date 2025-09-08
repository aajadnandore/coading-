#include<bits/stdc++.h>
using namespace std;
int main(){
    
    int x = 4, y = 0; // Initialize x and y

    while (x >= 0) { // Loop while x is non-negative
        x--; 
        y++;

        if (x == y) 
            continue; // Skip printing if x == y

        cout << x << " " << y << endl;
    }

    return 0;
}