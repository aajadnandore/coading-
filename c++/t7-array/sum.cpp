#include<bits/stdc++.h>
using namespace std;
void sum(int arr[],int n ){
    int s = 0;
    for(int i = 0; i<n; i++){
        s+=arr[i];
    }
    cout<<" the sum of the array is: "<<s;
}
int main(){
    int n;
    cout<<"enter n ";
    cin>>n;

    int arr[n];
    for(int i=0; i<n; i++){
        cout<<"enter element "<<i+1<<" : ";
        cin>>arr[i];
    }
    cout<< " the array is : ";
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    sum(arr,n);
return 0;
}