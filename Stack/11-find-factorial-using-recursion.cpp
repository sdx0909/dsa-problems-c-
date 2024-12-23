#include<iostream>
using namespace std;
int  facto(int);
int main(){
    int  num,res;
    cout<<"\nEnter any Number:";
    cin>>num;
    res=facto(num);
    cout<<"\nFactorial:"<<res;
    return 0;
}
int  facto(int  num){
    if(num == 1 || num == 0){
        return 1;
    }else{
        return (num*facto(num-1)); // recursion
    }
}