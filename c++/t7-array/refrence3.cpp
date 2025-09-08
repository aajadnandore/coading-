#include<bits/stdc++.h>
using namespace std;
void change(int arr[]){
      arr[0] = 5;
}
void changex(int &x){
    x =5;
}
int main(){
    int arr[] = {1,2,3};
    change(arr);
    int x = 3; 
    changex(x);
    cout<<x<<endl;
    for(int i=0;i<3; i++){
        cout<<arr[i];
        
    }
    
return 0;
}