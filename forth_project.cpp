#include <iostream>

using namespace std;
class Distance{
    typedef int km;
    km km1;
    typedef int m;
    m m1;
    public :
    void seting(km km1 , m m1){
        this-> km1 =km1;
        this ->m1 = m1;
    };
    void get(){
        cout<<"the total km is"<<km1;
        cout<<"the total m is"<<m1;
    };
    Distance operator+(Distance n){
        class Distance new1;
        new1.km1 = this->km1 + n.km1;
        new1.m1 = this->m1 + n.m1;
        return new1;
    };
};
int main()
{
    class Distance distance1 , distance2 , distance3;
    distance1.seting(10 , 5);
    distance2.seting(15 , 3);
    distance3 = distance1+distance2;
    distance3.get();
    return 0;
}