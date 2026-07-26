#include <iostream>
using namespace std;
int main(){
    int arr[]={1,22,113,14,5};
    int n=sizeof(arr)/4;
    int mi=arr[0];
    for (int i=1;i<n;i++){
        mi=min(mi,arr[i]);
    }
        cout<<mi;
}