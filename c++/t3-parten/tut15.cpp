#include<bits/stdc++.h>
using namespace std;
int main(){

    // left side triangle
    
    int n;
    cout<<"enter side of square :";
    cin>>n;
    
    for(int i=1; i<=n; i++){   
        for(int j=1; j<=n+1 -i; j++){    
            cout<<"  ";
        }
        for(int j=1; j<=i; j++){    
            cout<<"* ";
        }
    cout<<endl; 
    }  

return 0;
}