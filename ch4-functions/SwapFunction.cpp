#include<iostream>
using namespace std;
void swap(int& x, int& y){
    int temp=x;
    x=y;                              
    y=temp;
    // cout<<x<<" "<<y<<endl;
}
int main(){
    int x=2;
    int y=4;
    cout<<x<<" "<<y<<endl;
    swap(x,y);
    cout<<x<<" "<<y<<endl;
}
//PASS BY VALUE
//IS A PROBLEM
//in this case we cant swap the numbers because the boxes in the functions variables and the main variables boxes ate different.
//------------------------------------------------------------------------------------------------------------------------------------------------
//PASS BY REFRENCE
//we use "int&" to swap a number>
//the "&" is used to store a number to exact same box in the main and function variables.
