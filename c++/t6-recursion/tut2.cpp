#include<bits/stdc++.h>
using namespace std;
void print (int n,int c){
    
    if(n==0){
    cout<<c;
    return;
    } 
    
    c = c+n;

     print (n-1,c);
}
int main(){
    int c =0;
    print(10,c);

return 0;
}