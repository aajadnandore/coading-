#include<bits/stdc++.h>
using namespace std;
int main(){
  
    int aarr[4][2] = {{11,1},{12,2},{13,3},{14,4}};
    for(int i=0; i<4; i++){
      for(int j=0; j<2; j++){
        aarr[i][j];
    }
}
    int barr[4][2] = {{11,1},{12,2},{13,3},{14,4}};
    for(int i=0; i<4; i++){
      for(int j=0; j<2; j++){
        barr[i][j];
     }
 }
    int carr[4][2];
    for(int i=0; i<4; i++){
        for(int j=0; j<2; j++){
            carr[i][j] =  aarr[i][j]+ barr[i][j];
        }
        
    }
    
    for(int i=0; i<4; i++){
      for(int j=0; j<2; j++){
        cout<<carr[i][j]<<" ";
        
    }
       cout<<endl;
    }
return 0;
}