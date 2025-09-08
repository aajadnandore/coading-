#include<bits/stdc++.h>
using namespace std;
int main(){

    // square alphabets

    int n;
    cout<<"enter n :";
    cin>>n;
    
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++){
            cout<<(char)(i+64)<<" ";    // type cast
        }
    cout<<endl; 
    }  
       

return 0;
}