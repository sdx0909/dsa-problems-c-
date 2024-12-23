// Static Implementation of Stack.
#include<iostream>
#include<process.h>
using namespace std;
#define max 5 // maximum-size
class  Stack{
    int  item[max],top;
 public:
    void  create(Stack*);
    void  isEmpty(Stack*);
    void  isFull(Stack*);
    void  push(Stack*,int);
    int   pop(Stack*);
    void  display(Stack*);
};
void  Stack::create(Stack  *p){
    p->top=-1;
    cout<<"\nStack is Created..!";
}
void  Stack::isEmpty(Stack  *p){
    if(p->top==-1){
        cout<<"\nStack is Empty";
    }
    else{
        cout<<"\nStack is Not Empty";
    }
}
void Stack::isFull(Stack  *p){
    if(p->top==max-1){
        cout<<"\nStack is Full";
    }
    else{
        cout<<"\nStack is Not Full";
    }
}
void Stack::push(Stack  *p,int  item){
    if(p->top==max-1){
        cout<<"\nStack Overflows";
    }
    else{
        ++p->top;
        p->item[p->top]=item;
        cout<<"\nElement Pushed..!";
    }
}
int  Stack::pop(Stack  *p){
    if(p->top==-1){
        cout<<"\nStack Underflows";
        return 0;
    }
    else{
        return (p->item[p->top--]);
    }
}
void Stack::display(Stack  *p){
    cout<<endl;
    for(int i=p->top;i>=0;i--){
        cout<<p->item[i]<<endl;
    }
}
int main(){
    int  ch,n,z;
    Stack *p,q,obj;
    p=&q;
    do{
        cout<<"\n1:CREATE\n2:PUSH\n3:POP\n4:DISPLAY\n5:EXIT";
        cout<<"\nEnter choice:";
        cin>>ch;
        switch(ch){
            case  1:
                obj.create(p);
                break;
            case  2:
                cout<<"\nEnter any Number:";
                cin>>n;
                obj.push(p,n);
                break;
            case  3:
                z=obj.pop(p);
                cout<<"\nPopped Element:"<<z;
                break;
            case  4:
                obj.display(p);
                break;
            case  5:
                exit(2);
            default:
                cout<<"\nInvalid Choice..!";
        }
    }while(ch!=5);
    return 0;
}