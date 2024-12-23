#include<iostream>
#include<string.h>
using namespace std;

#define MAX 10
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
    int   i=0,cnt=0;
    char  str[20];
    Stack  *p,obj;
    p=&obj;
    cout<<"\nEnter any String:";
    cin>>str;
    obj.create(p);
    strlwr(str); // in lowercase
    while(str[i] != '\0'){
        if(str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u'){
            obj.push(p,str[i]);
        }
        i++;
    }   
    while(p->top != -1){
        cnt++;
        obj.pop(p);
    }
    cout<<"\nTotal No. of Vowels:"<<cnt;
    return 0;
}