#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter n: ";
    cin>>n;
    int i=1;
   for (;i<=n;i++){
    if(i%5==0) continue;
        cout<<i<<endl; 
    }  
}
//  Also use this way
//  for (if i=1;i<=n;i++)2