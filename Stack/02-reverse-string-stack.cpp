// Reverse given string by using stack.
#include<iostream>
#include<process.h>
#define max 20
using namespace std;
class  Stack{
public:
    char  item[max],top; // character type array 
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
    Stack  *p,q,obj;
    p=&q;
    int  i=0,j=0;
    char  str[20],rev[20];
    cout<<"\nEnter any String:";
    cin>>str;
    // character-by-character traversing 
    while(str[i] != '\0'){
        obj.push(p,str[i]);
        i++;
    }
    // while stack is not empty
    while(p->top != -1){
        rev[j++]=obj.pop(p);
    }
    rev[j]='\0'; // end of string
    cout<<"\nReversed String:"<<rev;
    return 0;
}