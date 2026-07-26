// #include <iostream>
// using namespace std;
// int main(){
//     for(int i=1;i<=100;i++){
//         if (i%2==0) cout<<i<<endl;
//     }
// }
#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter n: ";
    cin>>n;
    for(int i=1;i<=n;i++){
        if (i%2!=0) continue;
        // if(i%2==0) continue; // use to skip the certain loops
        cout<<i<<endl;
    }
} 