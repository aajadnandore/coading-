#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[4][2] = {{11,1},{12,2},{13,3},{14,4}};
    int sum =0;
    for(int i=0; i<4; i++){
      for(int j=0; j<2; j++){
        sum += arr[i][j];
    }
}
    cout<<sum;

    return 0;
}