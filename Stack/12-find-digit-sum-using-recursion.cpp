#include<iostream>
using namespace std;
int  getDigitSum(int);
int  main(){
    int  num,res;
    cout<<"\nEnter any Number:";
    cin>>num;
    res=getDigitSum(num);
    cout<<"\nDigit-Sum:"<<res;
    return 0;
}
int  getDigitSum(int  num){
    if(num < 10){
        return num;
    }
    return ((num%10) + (getDigitSum(num/10)));
}