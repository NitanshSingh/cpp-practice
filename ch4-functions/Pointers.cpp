#include<iostream>
using namespace std;
int main(){
    int x=3;
    int* p=&x;
    cout<<x<<endl;
    *p=5;
    cout<<x<<endl;
    p=&x;
    cout<<&x<<endl;
    cout<<*p<<endl; //star operator
    cout<<p<<endl;
    cout<<&p<<endl;
}
// void swap (int* a,int*b){
//     int temp=*a;
//     *a=*b;
//     *b=temp;
// }
// int main(){nn
//     int a=3;
//     int b=4;
//     cout<<a<<" "<<b<<endl;
//     swap(&a,&b);
//     cout<<a<<" "<<b<<endl;
// }