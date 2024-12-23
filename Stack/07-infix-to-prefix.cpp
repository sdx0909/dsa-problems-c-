// conversion of infix to prefix expression.
#include<iostream>
#include<string.h>
#define MAX 20
using namespace std;
class  Stack{
public:
    int  item[MAX],top;
    void  create(Stack*);
    void  push(Stack*,int);
    int   pop(Stack*);
};
void  Stack::create(Stack  *p){
    p->top=-1;    
}
void  Stack::push(Stack  *p,int  item){
    if(p->top == MAX-1){
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
    char   infix[MAX],pre[MAX],ch;
    int    i=0,j=0;
    Stack  *ops,*oprnd;
    Stack  p,q,obj;  
    ops=&p;
    oprnd=&q;
    obj.create(ops);
    obj.create(oprnd);
    cout<<"\nEnter Infix-Expression:";
    cin>>infix;
    strrev(infix); // reverse the string
    while(infix[i] != '\0'){
        if(infix[i] == ')' ||  infix[i] == '+' || infix[i] == '-' || infix[i] == '*' || infix[i] == '/' || infix[i] == '%' ){
            // if char is closed-parenthesis or operator 
            obj.push(ops,infix[i]);
        }
        else if(infix[i] == '('){
            // if char is opening-parenthesis
            while(ops->top != -1){
                // WHILE Stack is Not-Empty.
                ch=obj.pop(ops);
                if(ch != ')'){
                    // if char is Not Closed-Parenthesis(i.e Only OPERATOR)
                    obj.push(oprnd,ch);
                }
            }
        }
        else{
            // if char is operand
            obj.push(oprnd,infix[i]);
        }
        i++;
    }
    if(ops->top != -1){
        // if opstack Not-Empty
        while(ops->top != -1){
            // WHILE opstack Not-Empty
            ch=obj.pop(ops);
            if(ch != ')'){
                // if char is Not Closed-Parenthesis
                obj.push(oprnd,ch);
            }
        }
    }
    while(oprnd->top != -1){
        // WHILE operandstack Not Empty
        ch=obj.pop(oprnd);
        pre[j]=ch;
        j++;
    }
    pre[j]='\0'; // end-of-string
    cout<<"\nPREFIX EXPRESSION:"<<pre;
    return 0;
}