#include <iostream>
using namespace std;
int main(){
    int arr[]={1,2,3,41,5};
    int n=sizeof(arr)/4;
    int mx=arr[0];
    for (int i=0;i<n;i++){
        mx=max(mx,arr[i]);
    }
    cout<<mx;
}