#include<bits/stdc++.h>
using namespace std;
int main(){

    int n1;
    cout<<"enter nnuber :";
    cin>>n1;

    char op;
    cin>>op;

    int n2;
    cout<<"enter nnuber :";
    cin>>n2;

    if(op=='+') cout<<n1+n2;
    if(op=='-') cout<<n1-n2;
    if(op=='*') cout<<n1*n2;
    if(op=='/') cout<<n1/n2;

return 0;
}