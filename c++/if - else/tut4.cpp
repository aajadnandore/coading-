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

    switch(op){
        case '+':
        cout<<n1+n2;
        break;

        case '-':
        cout<<n1-n2;
        break;

        case '*':
        cout<<n1*n2;
        break;

        case '/':
        cout<<n1/n2;
        break;
        default: cout<<"invalid operator";
        
    }

return 0;
}