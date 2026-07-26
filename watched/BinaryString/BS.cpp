#include <iostream>
using namespace std;
int main(){
int arr[]={1,3,4,6,8,9};
int n = sizeof(arr)/sizeof(arr[0]);
int target;
cout<<"enter target: ";
cin>>target;
int low = 0;
int high = n-1 ;
int result = -1 ;
while ( low <= high ) {
    int mid = ( low + high ) / 2 ;
    if ( arr[mid] == target ){
         result = mid ;
    break;
    }
    else if ( target > arr [mid] ) low = ( mid + 1 ) ;
    else high = (mid -1) ;
    }
    cout <<"Index: "<<result<<endl;
    return 0;
}