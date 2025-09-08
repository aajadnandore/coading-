#include<bits/stdc++.h>
using namespace std;
int main(){

    // triangle 
    
    int n;
    cout<<"enter n :";
    cin>>n;
    
    for(int i=1; i<=n; i++){
        for(int j=1; j<=i; j++){     // j<=i (i times run)
            cout<<(char)(j+64)<<" ";    // <<i<<
        }
    cout<<endl; 
    }  

return 0;
}