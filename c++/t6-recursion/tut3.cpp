#include<bits/stdc++.h>
using namespace std;  
int fibo(int n){
if(n==0||n==2) return 1;
return fibo(n-1) + fibo(n-2);

}               // fibonacci
int main(){
    int n;
    cout<<"Enter n :";
    cin>>n;
    cout<<fibo(n);
    

return 0;
}