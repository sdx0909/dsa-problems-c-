#include<iostream>
using namespace std;

#define MAX 10
class  Stack{
    public:
        int   item[MAX],top;
        void  create(Stack*);
        void  push(Stack*,int);
        int   pop(Stack*);
};
void  Stack::create(Stack  *p){
    p->top=-1;
}
void  Stack::push(Stack  *p,int  x){
    if(p->top == MAX-1){
        cout<<"\nStack Overflows..!";
    }
    else{
        ++p->top;
        p->item[p->top]=x;
    }
}
int  Stack::pop(Stack  *p){
    int  z;
    if(p->top == -1 ){
        cout<<"\nStack Underflows..!";
        return 0;
    }
    else{
         return (p->item[p->top--]);
    }
}
int  main(){
    Stack   *p,obj;
    p=&obj;
    int  num,i,r;
    obj.create(p);
    cout<<"\nEnter any Decimal Number:";
    cin>>num;
    while(num!=0){  // logic of octal
        r=num%8; 
        obj.push(p,r);
        num/=8;
    }
    cout<<"\nOctal Number:";
    while(p->top != -1){
        cout<<obj.pop(p);
    }
    return 0;
}
