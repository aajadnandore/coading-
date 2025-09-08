#include<bits/stdc++.h>
using namespace std;
    void swap(int* a, int* b){   //pass by reference 
        int temp = *a;            
        *a = *b;
        *b = temp;
    }

    int main(){
       int x=2, y=5;
        cout<<x<<" "<<y<<endl; 
        swap(&x,&y);
        cout<<x<<" "<<y<<endl;  
    
    return 0;
    }