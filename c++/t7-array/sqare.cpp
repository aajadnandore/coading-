#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"enter n : ";
    cin>>n;

    int arr[n] ;
    for(int i =0;i<n;i++){
        arr[i] = (i+1)*(i+1);
    } 
    cout<<"the square root till n is : ";
    for(int i =0;i<n;i++){
        cout<<arr[i]<<" ";
    } 
    
return 0;
}