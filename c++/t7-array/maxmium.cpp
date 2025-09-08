#include<bits/stdc++.h>
using namespace std;
int main(){

    int arr[] = {69,58,3,4,3,98,3,1} ;
    int max =0;
    for(int i=0; i<8; i++){
        if(max<arr[i]) {

            max =arr[i];
        }

    }

cout<<max;

return 0;
}