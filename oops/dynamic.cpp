#include<bits/stdc++.h>
using namespace std;
// int main(){
    
//    int* p = new int(10);
//    cout<<*p<<endl; 

// return 0;
// }

class stu{
    public:
    string name;
    int age ;
    
    stu(string s , age a){
        name = s;
        age = a;

    }

};
void print(stu s){
    cout<<s.name<<" "<<s.age<<endl;
}

int main(){

//   stu s1;
//   s1.name = 'a';
//   s1.age = 19;

//   stu s2;
//   s2.name = 'b';
//   s2.age = 20;

stu s1("a",19);
stu s2("b",20);

   print(s1);
   print(s2);

}