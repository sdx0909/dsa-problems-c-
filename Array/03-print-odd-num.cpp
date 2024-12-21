#include<iostream>
using namespace std;
int  main(){
    int  x[5];
    cout<<"\nEnter 5 Elements:";
    for(int i=0;i<5;i++){
        cin>>x[i];
    }
    cout<<"\nOnly Odd Numbers:";
    for(int i=0;i<5;i++){
        if(x[i]%2!=0){
            cout<<x[i]<<"\t";
        }
    }
    return 0;
}