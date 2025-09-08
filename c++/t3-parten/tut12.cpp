#include<bits/stdc++.h>
using namespace std;
int main(){

    // mid (+) 
    
    int n;
    cout<<"enter n :";
    cin>>n;
    int mid = n/2+1;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++){
            if(i==mid || j==mid ) cout<<"* ";
            else 
            cout<<"  ";
        }
        cout<<endl;
    }

return 0;
} 