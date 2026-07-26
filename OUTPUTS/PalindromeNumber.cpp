#include <iostream>
using namespace std;
int main(){
    bool is=true;
    bool isnot=false;
    int x;
    cout<<"enter number: ";
    cin>>x;
    if(x < 0){
    cout << "is not palindrome";
    return 0;   // exit immediately, skip everything else
}
    int y =x;
    int r=0;
    while (x!=0){
    int ld = x%10;
    r *= 10;
    r +=ld;
    x /=10;
    }
    (is) = ( y == r );
    (isnot) = ( y!=r);
     if (is){
    cout <<"is  palindrome";
    }
    else if (isnot){
    cout<<"is not palindrome"<<endl<<r;
    }
}