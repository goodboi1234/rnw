#include <iostream>
#include <string.h>
#include <map>
using namespace std;
class Tata{
    public:
    map<string , string> elements;
    Tata(){
    elements["engine"] = {"engine1" , "engine2"};
    elements["jumpers"]= {"loose" , "tight"};
    elements["headlights"] = {"dull" , "bright"};
    elements["gearbox"]  = {"auto" , "gearbox"};
    elements["clutch"] = {"no" , "yes"};
    elements["fuels"] = {"deisel" , "petroll"};
    };
    void doing(){
        cout<<"the company is manufacturing cars";
    };
};
class Nano:public Tata{
    public:
    map<string , string> nano_elements;
    Nano(){
    nano_elements["engine"] = elements["engine"][0];
    nano_elements["jumpers"] = elements["jumpers"][0];
    nano_elements["headlights"] = elements["headlights"][0];
    nano_elements["gearbox"] = elements["gearbox"][1];
    nano_elements["fuels"] = elements["fuels"][1];
    nano_elements["size"] = "too small";   
    };
};
class Nexon:public Tata{
   public:
    map<string , string> nex_elements;
    Nexon(){
   nex_elements["engine"] = elements["engine"][0];
    nex_elements["jumpers"] = elements["jumpers"][1];
    nex_elements["headlights"] = elements["headlights"][0];
    nex_elements["gearbox"] = elements["gearbox"][1];
    nex_elements["fuels"] = elements["fuels"][1];
    nex_elements["size"] = "too small";   
        

    };
};
class Jaguar:public Tata{
    public:
    map<string , string> jaguar_elements;
    Jaguar(){
    jaguar_elements["engine"] = elements["engine"][1];
    jaguar_elements["jumpers"] = elements["jumpers"][1];
    jaguar_elements["headlights"] = elements["headlights"][1];
    jaguar_elements["gearbox"] = elements["gearbox"][0];
    jaguar_elements["fuels"] = elements["fuels"][0];
    jaguar_elements["size"] = "too small";   
    };
    void what_init(){
        cout<<"manufactured by jrr group"<<endl<<"owned by Tata motors";
    };
};
int main(){
    class Jaguar jaguar;
    for(const auto& plain:jaguar.jaguar_elements){
        cout<<plain.first<<":"<<plain.second<<endl;
            };
    return 0;
}