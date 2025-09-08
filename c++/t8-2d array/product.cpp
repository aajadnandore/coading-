#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[4][2] = {{11,1},{12,2},{13,3},{14,4}};
    int prd =1;
    for(int i=0; i<4; i++){
      for(int j=0; j<2; j++){
        prd *= arr[i][j];
    }
}
    cout<<prd;

    return 0;
}