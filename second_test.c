#include <iostream>
#include <string.h>
using namespace std;
class Student{
    char name[100];
    int sclass;
    char section[100];
    static char school_name[100];
    public:
  void inname(string name){
      cout<<"enter the name of the person" &&cin>>name;
      strcpy(this->name , name.c_str());
      cout<<name<<endl;
  };
  void grade(){
      cout<<"enter the class in which you are";
      cin>>sclass;
      this->sclass = sclass;
      cout<<sclass<<endl;
  };
  void whisec(){
      string section;
      cout<<"enter the section in which you are";
      cin>>section;
      strcpy(this->section , section.c_str());
      cout<<section;
  }; 
};
int main()
{
    class Student student;
    student.inname("zeel");
    student.grade();
    student.whisec();
    return 0;
}
