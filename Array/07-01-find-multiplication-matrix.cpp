// Static Approach
#include<iostream>
using namespace std;
int main(){
    int  a[2][2],b[2][2],c[2][2];
    cout<<"Enter 2 * 2 Matrix:\n";
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            cin>>a[i][j];
        }
    }
    cout<<"Enter 2 * 2 Matrix:\n";
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            cin>>b[i][j];
        }
    }
    // Multiplication 
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            c[i][j]=0;
            for(int k=0;k<2;k++){
                c[i][j]=c[i][j]+a[i][k]*b[k][j];
            }
        }
    }
    cout<<"\nMatrix Multiplication:\n";
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            cout<<"\t"<<c[i][j];
        }
        cout<<endl;
    }
    return 0;
}