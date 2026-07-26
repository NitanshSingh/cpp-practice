#include <iostream>
using namespace std;
int main(){
    // int n;
    // cout<<"enter number: ";
    // cin>>n;
    // // 4,7,10,13...
    // for (int i=4;i<=2*n-1;i+=3){
    //     cout<<i<<" ";
    // }
    int n;
    cout<<"enter number: ";
    cin>>n;
    int d;
    cout<<"enter number: ";
    cin>>d;
    for (int i=1;i<=n;i++){
        cout<<n+ (i-1)*d<<" ";
    }
}
 