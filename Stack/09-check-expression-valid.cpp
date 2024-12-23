#include<iostream>
using namespace std;

#define MAX 50
class  Stack{
    public:
        char  item[MAX];
        int   top;
        void  create(Stack*);
        void  push(Stack*,char);
        char  pop(Stack*);
};
void  Stack::create(Stack  *p){
    p->top=-1;
}
void  Stack::push(Stack  *p,char  x){
    if(p->top == MAX-1){
        cout<<"\nStack Overflows..!";
    }
    else{
        ++p->top;
        p->item[p->top]=x;
    }
}
char  Stack::pop(Stack  *p){
    if(p->top == -1 ){
        cout<<"\nStack Underflows..!";
        return '0';
    }
    else{
         return (p->item[p->top--]);
    }
}
int  main(){
    Stack  *p,obj;
    p=&obj;
    char  exp[MAX],ch;
    int   i=0,t=0;
    cout<<"\nEnter any Expression:";
    cin>>exp;
    obj.create(p);
    // For Example:  (a{k(h-k)-j(k+j)+k})
    while(exp[i] != '\0'){
        if(exp[i] == '(' || exp[i] == '{' || exp[i] == '['){
            // if char is any opening-parenthesis
            obj.push(p,exp[i]);
        }
        if(exp[i] == ')' || exp[i] == '}' || exp[i] == ']'){
            // if char is any closing-parenthesis
            ch=obj.pop(p);
            if(
                (ch == '(') != (exp[i] == ')') ||
                (ch == '{') != (exp[i] == '}') ||
                (ch == '[') != (exp[i] == ']')
            ){
                t=1;
                break;
            }
        }   
        i++;
    }

    if(p->top != -1 || t==1){
        cout<<"\nImbalanced Expression..!";
    }
    else{
        cout<<"\nBalanced Expression..!";
    }
    return 0;
}