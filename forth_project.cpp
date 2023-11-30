#include <iostream>

using namespace std;
class Distance{
     int km;
    int m;
    public :
    void seting(int km  , int m1){
        this-> km =km+=m/1000;
        this ->m = m-1000;
        
        
    };
    void get(){
        cout<<"the total km is"<<km;
        cout<<"the total m is"<<m;
    };
    Distance operator+(Distance n){
        class Distance new1;
        new1.km = this->km+n.km;
        new1.m = this->m+n.m;
        return new1;
    };
};
int main()
{
    class Distance distance1 , distance2 , distance3;
    distance1.seting(3 , 1020);
    distance2.seting(2 , 2050);
    distance3 = distance1+distance2;
    distance3.get();
    return 0;
}
