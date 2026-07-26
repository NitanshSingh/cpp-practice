#include <iostream>
using namespace std;
int main(){
    int ram;
    int shyam;
    int gyan;
    cout<<"enter ram age : ";
        cin>>ram;
    cout<<"enter shyam age : ";
        cin>>shyam;
    cout<<"enter gyan age : ";
        cin>>gyan;
    if(ram<shyam){
    if(ram<gyan)
        cout<<"ram is youngest";
    else if (ram>gyan)
        cout<<"gyan is youngest";
    }
    if (shyam<ram){
    if (shyam<gyan)
        cout<<"shyam is youngest";                      ////// erorrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrr *_*
        else {
            cout<<"gyan is youngest";
        }
    }
    else if (ram==shyam && shyam==gyan){
        cout<<" all are equal";
     } 
     else if (ram==shyam)
        cout<<" ram and shyam is equal";
    
     else if (shyam==gyan)
        cout<<" shyam and gyan is equal";
    
     else if (ram==shyam)
        cout<<" ram and shyam is equal";
}