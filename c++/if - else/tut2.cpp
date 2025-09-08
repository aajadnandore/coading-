#include<bits/stdc++.h>
using namespace std;
int main(){

    int cp;
    cout<<"enter cost price :";
    cin>>cp;

    int sp;
    cout<<"enter selling price :";
    cin>>sp;

    int v = cp-sp;

    if(cp<sp) 
    cout<<"profit  "<<v*-1;
    
    if(cp>sp)
    cout<<"loss  "<<v;

    if (cp==sp)
    cout<<"no profit, no loss"<<v;

     

return 0;
}