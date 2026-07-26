#include <iostream>
using namespace std;
int main(){
    float l;
    float b;
        cout<<"enter length : ";
    cin>>l;
        cout<<"enter breadth : ";
    cin>>b;
    float area = (l*b);
        cout<<"area is : "<<(l*b)<<endl;
    float perimetre = 2*(l+b);
        cout<<"perimetre is : "<< 2*(l+b)<<endl;
    if (area>perimetre) {
        cout<<"area of rectangle greater";
    }
    else if ( perimetre>area ){
        cout<<"perimetre of rectangle is greater than area";
    }
    else  {
        cout<<"equal";
    }
}  