#include<bits/stdc++.h>
using namespace std;
int main(){
 
    // out line square


    int n;
    cout<<"enter side of square :";
    cin>>n;

    for (int i = 1; i <=n; i++) {
        for (int j = 1; j <=n; j++) {
            
            if (i == 1 || i == n || j == 1 || j == n)
                cout << "* ";
            else
                cout << "  ";
        }
        cout << endl;
    }
   
return 0;
}