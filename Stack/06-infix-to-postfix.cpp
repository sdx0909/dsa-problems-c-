// conversion of infix to postfix expression
#include<iostream>
#include<process.h>
#define max 20
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
    int  i=0,j=0;
    Stack  *p,q,obj;
    p=&q;
    char  infix[20],post[20],ch;
    cout<< "\nEnter Infix Expression:";
    cin>>infix;
    obj.create(p);
    while(infix[i] != '\0'){
        if(infix[i]== '(' || infix[i]== '+' || infix[i]== '-' || infix[i]== '*' || infix[i]== '/' || infix[i]== '%' ){
            // if char is either '(' or Operator
            obj.push(p,infix[i]);
        }
        else if(infix[i] == ')'){
            // if char is closing parenthesis.
            while(p->item[p->top] != '('){
                // while '(' encounters
                ch=obj.pop(p);
                if(ch != '('){
                    // ONLY-OPRETORs
                    post[j++]=ch;
                }
            }
            obj.pop(p); // removes '(' parenthesis 
        }
        else{ 
            // if char is Operand
            post[j++]=infix[i];
        }
        i++;
    }
    if(p->top != -1){
        // if Stack is Not Empty
        while(p->top != -1){
            ch=obj.pop(p);
            if(ch != '('){
                post[j++]=ch;
            }
        }
    }
    post[j]='\0';
    cout<<"\nReversed String:"<<post;
    return 0;
}