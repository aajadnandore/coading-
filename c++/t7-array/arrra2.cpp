#include<bits/stdc++.h>
using namespace std;
int main(){
    int n; 
    cout<<"enter the size of array";
    cin>>n;
    int arr[n];
    cout<<endl<<"enter the elments of array : ";
    for(int i = 0; i<n;i++){
        cin>>arr[i];
    }
    cout<<"the array is : ";
    for(int i = 0; i<n;i++){
        cout<<arr[i]<<" ";
    }

return 0;
}