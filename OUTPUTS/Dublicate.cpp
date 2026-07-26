#include <iostream>
using namespace std;
int main(){
    int arr[5]= {1,2,3,4,1};
    int n= sizeof(arr)/4;
    int repeat=0;
    int count=0;
    for (int i=1;i<n;i++){
        if (repeat=arr[i]){
            count++;
        }
         cout<<count;

        
    }
}