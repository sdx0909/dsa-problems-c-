#include<iostream>
using namespace std;
int  main(){
    // for addition and subtraction order must be same.
    int  x[2][2]; 
    int  y[2][2];
    int  z[2][2];
    cout<<"\nEnter 2 * 2 Matrix:\n";
    for(int i=0;i<2;i++){ // for rows
        for(int j=0;j<2;j++){  // for columns
            cin>>x[i][j];
        }
    }
    cout<<"\nEnter 2 * 2 Matrix:\n";
    for(int i=0;i<2;i++){ // for rows
        for(int j=0;j<2;j++){  // for columns
            cin>>y[i][j];
        }
    }
    for(int i=0;i<2;i++){ // common row
        for(int j=0;j<2;j++){  // common column
            z[i][j]=x[i][j]-y[i][j];
        }
    }
    cout<<"\nMatrix Subtraction:\n";
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            cout<<"\t"<<z[i][j];
        }
        cout<<endl;
    }
    return 0;
}