#include<bits/stdc++.h>
using namespace std;
void print (int n){
    if(n==10) return;
    else
     cout<<n<<endl;
     print (n+1);
}
int main(){
    print(1);

return 0;
}