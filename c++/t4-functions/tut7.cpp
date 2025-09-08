#include<bits/stdc++.h>
using namespace std;
// void swap(int x , int y){    //pass by value 
//     int temp=x;            
//     x = y;
//     y = temp;
// }
// int main(){
//    int x=2, y=5;
//     cout<<x<<" "<<y<<endl; 
//     swap(x,y);
//     cout<<x<<" "<<y<<endl;  

// return 0;
// }

void swap(int& x , int& y){    //pass by reference 
    int temp=x;            
    x = y;
    y = temp;
}
int main(){
   int x=2, y=5;
    cout<<x<<" "<<y<<endl; 
    swap(x,y);
    cout<<x<<" "<<y<<endl;  

return 0;
}