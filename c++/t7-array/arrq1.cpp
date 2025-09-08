#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[] = {1,4,9,16};
    int n =4;
    cout<<"the square root till n is : ";
    for(int i =0;i<n;i++){
        if((i%2)==0){
         arr[i] += 10;
        }else{
            arr[i]*=2;
        }
        
    } 
    for(int i =0;i<n;i++){
        cout<<arr[i]<<" ";
    } 
    
return 0;
}