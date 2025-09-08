#include <bits/stdc++.h>
using namespace std;

int main() {

    // square number 

    
    int n;
    cout << "Enter side of square: ";
    cin >> n;

    for (int i = 1; i <= n; i++) { // Outer loop for rows
        for (int j = 1; j <= n; j++) { // Inner loop for columns
            cout << i<<" "; // Print the row index instead of j
        }
        cout << endl; // Move to the next line after printing one row
    }

    return 0;
}