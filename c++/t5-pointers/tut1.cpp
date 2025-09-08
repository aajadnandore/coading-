#include<bits/stdc++.h>
using namespace std;
int main(){
    
    int x = 3;
   // cout<<&x;  // address
   
    int* p = &x;
    *p = 34;
    x=45;
    cout<<x;

return 0;
}