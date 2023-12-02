
//qus-1 Write a Program to create a class that illustrates the concept of handling all types of exceptions using general exceptions.

#include <iostream>
using namespace std;
class Cricket{
    public:
    int wickets;
    int runs;
    char players[100] ;
    bool win;
    void set_data(int wickets , int runs){
        this->wickets = wickets;
        this->runs= runs;

    };
    void get_data(){
        cout<<"thotal runs made by the team is"<<runs<<endl;
        cout<<"total wickets taken by the team is"<<wickets;
    };
    exception(){
        if(wickets ==10 && runs >=200){
            win = true;
        };
        else{
            throw 10;
        };
        catch(int a){
    cout<<"sorry mae now you have to score more runs to win";
};
catch(chat a){
    cout<<"sorry mae now you have to score more runs to win";
};
catch(float a){
    cout<<"sorry mae now you have to score more runs to win";
};
catch([...]){
    cout<<"sorry mae now you have to score more runs to win";
};
    };


    };
int main(){
    class Cricket team1;
    team1.set_data(10 , 300);
    team1.get_data();

    int a;
    int age;
    cout<<"you want to see weather you you are adult or not"<<endl<<endl<<"type 1";
    cin>>a;
    if(a = 1){
        cout<<"enter your age";
        cin>>age;
    };
    exception(){
        if(age>=18){
            cout<<"congo mate you can vote now";
        };
        else{
            throw 0;
        };
   catch(int no){
    cout<<"sorry mate you can't vote";
   };
    };
    return 0;
}




