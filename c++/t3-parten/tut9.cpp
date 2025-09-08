#include<bits/stdc++.h>
using namespace std;
int main(){

    // odd triangle 

    int n;
    cout<<"enter side of square :";
    cin>>n;
    
    for(int i=1; i<=n; i++){
        for(int j=1; j<=i; j++){    
            cout<<2*j-1<<" ";


        } 
        cout<<endl; 
    }
        for(int i=1; i<=n; i++){
        int a=1;
         for(int j=1; j<=i; j++){    
            cout<<a<<" ";
            a += 2;
        }
    cout<<endl; 
    }     

return 0;
}