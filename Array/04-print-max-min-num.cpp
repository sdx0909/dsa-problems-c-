#include<iostream>
using namespace std;
int  main(){
    int  x[5];
    int  max=0;
    int  min=__INT_LEAST32_MAX__; // Maximum value
    cout<<"\nEnter 5 Numbers:";
    for(int i=0;i<5;i++){
        cin>>x[i];
        if(max < x[i]){
            max=x[i];
        }
        if(min > x[i]){
            min=x[i];
        }
    }
    cout<<"\nMaximum Val:"<<max;
    cout<<"\nMinimum Val:"<<min;
    return 0;
}