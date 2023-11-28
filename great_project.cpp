#include <iostream>
using namespace std;

int main(){
    int list1[4][4] = {{1 , 2 , 3 , 4},{5 , 6 , 7 , 8},{9 , 10 , 11 , 12},{13 , 14 , 15 , 16}};
     
     //writing the values of the row and the columns
     int row = 3;
     int col = 3;

     //making the loop run
     for(int r = 0;r<=3;){
        for(int c = 0;c<=3;){
            cout<<list1[r][c];
            c++;
            if(c = 3){
                cout<<list1[r][c];
                
                r--;
            };
            if(r = 3){
                    cout<<list1[r][c];
                    c--;
                    
                };
            if(c = 0 && r <= 3) {
                cout<<list1[r][c];
                r--;
                
                
            };
            if(r = 1 && c <=2){
                cout<<list1[r][c];
                c++;
            };
            if(c = 2 && r >=1){
                cout<<list1[r][c];
            };
            if(r = 2 && c <= 2){
                cout<<list1[r][c];
                c--;
            };
            if(list1[r][c] = 10){
                break;
            };
            
            
        }
     }
}