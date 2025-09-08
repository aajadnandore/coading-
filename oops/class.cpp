#include<bits/stdc++.h>
using namespace std;
class student {
 public:
string name;
int roll;
int sec;

};
void print(student a){
    cout<<a.name<<" "<<  a.roll<<" "<<a.sec<<endl;
}
int main(){
    student a1;
    a1.name = "djh";
    a1.roll = 1536;
    a1.sec = 2;

    student a2;
    a2.name = "bghcsgs";
    a2.roll = 5413;
    a2.sec = 2;

    student a3;
    a3.name = "hgdf";
    a3.roll =35;
    a3.sec = 2;

   print(a1);
   print(a2);
   print(a3);

return 0;
}