#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter number: ";
    cin>>n;
    // 3,12,48,192...
    int a=3;
    for (int i=1;
        i<=n;i++){
        cout<<a<<endl;
        a=(a*4);
    }
}