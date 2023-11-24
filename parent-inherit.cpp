#include <iostream>
#include <map>

using namespace std;
class Grandpa{
    public:
    
    map<string , string >looks;
    Grandpa(){
    looks["nose"]= "big";
    looks["hair"]="curvy";
    looks["skintone"] = "dark";
    looks["bodytype"] = "height";
};
};
class Dad:public Grandpa{
  public:
  Dad(){
    looks["new_skintone"] = "bright";
    looks["eyes"] = "dark";
  };
};
class Zeel:public Dad{
    public:
    Zeel(){
    looks["face"] = "square";
    };
    void will_do(){
        cout<<"will become a great ml engineer";
    };
};
     

int main()
{
    cout<<"Hello World";
    class Zeel zeel;
    for(const auto& plain:zeel.looks){
        cout<<plain.first<<":"<<plain.second<<endl;
    };
    zeel.will_do();
    return 0;
}