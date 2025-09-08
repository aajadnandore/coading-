#include<bits/stdc++.h>
using namespace std;
int main(){

    // square parten
   
    int m;
    cout<<"enter number of rows :";
    cin>>m;
    
    int n;
    cout<<"enter number of colam :";
    cin>>n;
    
    for(int i=1; i<=m; i++){
        for(int i=1; i<=n; i++){
            cout<<"* ";
        }
        cout<<endl;
    }

return 0;
}