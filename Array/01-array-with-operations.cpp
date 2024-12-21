#include<iostream>
#include<process.h>
#define max 5  // maximum size
int  item[max]; // storage
int  i=0; // intial index
int  cnt=0; // for counting 
using namespace std;
// oprations 
void insert(int);
int  remove(int);
void display();
void reverse();
int main(){
    int ch,n,z;
    do{
        cout<<"\n1:Insert\n2:Remove\n3:Display\n4:Reverse\n5:Exit";
        cout<<"\nEnter your choice:";
        cin>>ch;
        switch(ch){
            case  1:
                cout<<"Enter any number:";
                cin>>n;
                insert(n);
                break;
            case  2:
                cout<<"Enter any index:";
                cin>>n;
                z=remove(n);
                cout<<"\nRemoved element:"<<z;
                break;
            case  3:
                display();
                break;
            case  4:
                reverse();
                break;
            case  5:
                exit(4);
            default:
                cout<<"\nInvalid Input";
        }
    }while(ch!=5);
    return 0;
}
// operations
void  insert(int  x){
    if(cnt<max){
        item[i]=x;
        i++;
        cnt++;
        cout<<"\nElement is inserted..!";
    }
    else{
        cout<<"Array is Full";
    }
}
int  remove(int  pos){
    int z;
    if((pos<0 && pos>max-1) || pos>=cnt ){
        cout<<"\nInvalid Position";
        return 0;
    }
    else{
        z=item[pos];
        // shifting of elements to left side
        for(int j=pos;j<cnt;j++){
            item[j]=item[j+1];
        }
        i--;
        cnt--;
        return z;
    }
}
void  display(){
    for(int j=0;j<cnt;j++){
        cout<<"\t"<<item[j];
    }
}
void  reverse(){
    for(int j=cnt-1;j>=0;j--){
        cout<<"\t"<<item[j];
    }
}