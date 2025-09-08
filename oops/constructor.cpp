#include<bits/stdc++.h>
using namespace std;
class  team {
   public:
   string name;
   int age;
   int fr;

   team (string s , int a, float f){     //constructor
    name = s;
    age = a;
    fr = f;
   }
};

int main(){
       
    team s1 ("aajad" ,19 , 5 );

     cout<<s1.name<<" "<<s1.age<<" "<<s1.fr<<endl;
return 0;
}