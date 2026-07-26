#include<iostream>
using namespace std;
void swap(int& a, int& b){
    int temp=a;
    a=b;                              
    b=temp;
    cout<<a<<" "<<b<<endl;
}
int main(){
    int a=2;
    int b=4;
    cout<<a<<" "<<b<<endl;
    swap(a,b);
    //------------------------------------------------------
    //METHOD 2
    // x=x+y;
    // y=x-y;
    // x=x-y;
}