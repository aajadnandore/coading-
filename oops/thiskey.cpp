#include<bits/stdc++.h>
using namespace std;
class cricket{
    public:
    string name;
    int run;
    cricket(string name, int run){
         this->name = name;
         this->run = run;
    }

};
void print(cricket c){
    cout<<c.name<<" "<<c.run<<endl;
}


int main(){
    cricket c1("rohit",100);
    cricket c2("virat",200);

    print(c1);
    print(c2);

return 0;
}