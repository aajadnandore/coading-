#include<bits/stdc++.h>
using namespace std;
int main(){
     int arr[2][2] = {{10,15},{14,44}};
     int max =0;
       for(int i=0; i<2; i++){
        for(int j=0; j<2; j++){
          if(max<arr[i][j]) max = arr[i][j];
          
       }
    }
    cout<<max<<" ";
return 0;
}