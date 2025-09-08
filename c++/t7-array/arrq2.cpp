#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[] = {1,3,0,10,2,5,6};
    int sumeven= 0;
    int sumodd=0;
    for(int i=0; i<7; i++){
        if(i%2==0){
            sumeven +=arr[i];
        }
        else {
            sumodd += arr[i];
        }
    }
    int ans = sumeven -sumodd;
    
    cout<<ans;
return 0;
}