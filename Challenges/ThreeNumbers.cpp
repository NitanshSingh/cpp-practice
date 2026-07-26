#include <iostream>
using namespace std;
int main(){
    float a;
    float b;
    float c;
    cout<<"enter a : ";
        cin>>a;
    cout<<"enter b : ";
        cin>>b;
    cout<<"enter c : ";
        cin>>c;
    if (a>b && a>c){
        cout<<a<<" is greater";
    }
    if (b>c && b>a){
        cout<<b<<" is greater"; 
    }
    if (c>a && c>b){
        cout<<c<<" is greater"<<endl;
    }
    else if (a==b && b==c){
        cout<<" all are equal";
     } 
     else if (a==b)
        cout<<" a and b is equal";
    
     else if (b==c)
        cout<<" b and c is equal";
    
     else if (a==c)
        cout<<" a and c is equal";
}