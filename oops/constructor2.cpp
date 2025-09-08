#include<bits/stdc++.h>
using namespace std;
class room{
    public:
    string name;
    int age;
    char type;
    room(){

    }
    room(string s, int a, char t){
       name = s;
       age = a;
       type = t; 
    }

};
void print(room& a){
    cout<<a.name<<" "<<  a.age<<" "<<a.type<<endl;
}
int main(){
    room a1("a", 19, '1');
    //  a1.name = "a";
    //  a1.age = 19;
    //  a1.type = '1';

    room a2;
     a2.name = "n";
     a2.age = 20;
     a2.type = '2';

    room a3;
     a3.name = "s";
     a3.age = 18;
     a3.type = '3';

     print(a1);
     print(a2);
     print(a3);
     
    //  class room {
    //     public:
    //         string name;
    //         int age;
    //         char type;
        
    //         room() {}  // Default constructor
        
    //         room(string s, int a, char t) {
    //             name = s;
    //             age = a;
    //             type = t;
    //         }
    //     };
        
    //     void print(const room& a) {  // Pass by reference
    //         cout << a.name << " " << a.age << " " << a.type << endl;
    //     }
        
    //     int main() {
    //         room a1("a", 19, '1');  // Use character '1' instead of integer 1
        
    //         room a2;
    //         a2.name = "n";
    //         a2.age = 20;
    //         a2.type = '2';  // Use character '2'
        
    //         room a3;
    //         a3.name = "s";
    //         a3.age = 18;
    //         a3.type = '3';  // Use character '3'
        
    //         print(a1);
    //         print(a2);
    //         print(a3);
     
      
return 0;
}