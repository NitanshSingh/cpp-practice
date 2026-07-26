//RECURSION
//functions calling itself.
//------------------------------------------------------------------------------------------------------------------------------
#include <iostream>
using namespace std;
void print(int n){
    if (n==0) return; //base case
    cout<<n<<endl; //call 
    print(n-1);   //work
}
int main(){
    int n;
    cout<<"enter n: ";
    cin>>n;
    print(n);
}