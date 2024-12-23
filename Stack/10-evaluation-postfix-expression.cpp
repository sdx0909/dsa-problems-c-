#include<iostream>
#include<math.h>
#define max 50
using namespace std;
class  Stack{
public:
    int  item[max],top;
    void  create(Stack*);
    void  push(Stack*,int);
    int   pop(Stack*);
};
void  Stack::create(Stack  *p){
    p->top=-1;    
}
void  Stack::push(Stack  *p,int  item){
    if(p->top == max-1){
        cout<<"\nStack Overflows..!";
    }
    else{
        ++p->top;
        p->item[p->top]=item;
    }
}
int  Stack::pop(Stack  *p){
    if(p->top == -1){
        cout<< "\nStack Underflows..!";
        return 0;
    }
    else{
        return (p->item[p->top--]);
    }
}
int  main(){
    Stack *p,obj;
    char  exp[max];
    int   i=0,op1,op2,val,res;
    p=&obj;
    cout<<"Enter Postfix Expression:";
    cin>>exp;
    obj.create(p);
    while(exp[i] != '\0'){
        if(exp[i] == '+' || exp[i] == '-' || exp[i] == '*' || exp[i] == '/' || exp[i] == '%' || exp[i] == '$'){
            // if char is operator
            op2=obj.pop(p); // two-times popped
            op1=obj.pop(p);
            switch(exp[i]){
                case  '+':
                    val=op1+op2;
                    obj.push(p,val);
                    break;
                case  '-':
                    val=op1-op2;
                    obj.push(p,val);
                    break;
                case  '*':
                    val=op1*op2;
                    obj.push(p,val);
                    break;
                case  '/':
                    val=op1/op2;
                    obj.push(p,val);
                    break;
                case  '%':
                    val=op1%op2;
                    obj.push(p,val);
                    break;
                case  '$':
                    val=pow(op1,op2);
                    obj.push(p,val);
                    break;
            }
        }
        else{ 
            // char is operand
            obj.push(p,exp[i]-48);
        }
        i++;
    }
    res=obj.pop(p);
    cout<<"\nValue:"<<res;
    return 0;
}

