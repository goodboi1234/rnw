#include <iostream>
#include <string.h>
using namespace std;
int sub(int a , int b){
    return b-a;
};
int main(){
    int row = 3;
    int col = 3;
    int list1[row][col] = {{1 , 7 , 8},{8 , 9 , 10} , {5 , 4 , 2}};    
    int small_no = list1[row][col];
    cout<<small_no<<endl;
    int big_no = list1[0][0];
    for(int j =0;j<=col;j++){
        for(int k = 0;k<=col;k++){
            if(small_no <= list1[j][k]){
                small_no = list1[j][k];

            };
          
            if(list1[j][k]>=big_no){
                big_no = list1[j][k];
            };
            
        };
    };
    cout<<sub(small_no , big_no)<<endl;
    cout<<small_no<<" "<<big_no;

    return 0;
}