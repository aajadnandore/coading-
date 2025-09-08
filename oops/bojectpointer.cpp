#include<bits/stdc++.h>
using namespace std;
// int main(){
       
//     int x = 4;
//     cout<<&x<<endl;
//     int* p = &x;
//     cout<<p<<endl;
//     cout<<*p<<endl;
//     *p = 10;
//     cout<<x;

// return 0;
// }
class cricket{
    public:
    string name;
    int run;
    cricket(string name, int run){
         this->name = name;
         this->run = run;
    }

};
// void print(cricket c){
//     cout<<c.name<<" "<<c.run<<endl;
// }


int main(){
    cricket c1("rohit",100);
    cricket c2("virat",200);

    cricket* p1 = &c1;
    cout<<(*p1).run<<endl;
    

return 0;
}