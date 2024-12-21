//  Dynamic Approach
#include<iostream>
using namespace std;
void  getOrder(int&,int&);
bool  isOrderValid(int,int,int,int);
int  main(){
    int  rowsA,colsA,rowsB,colsB;
    cout<<"Enter Matrix Order for A:";
    getOrder(rowsA,colsA);
    cout<<"Enter Matrix Order for B:";
    getOrder(rowsB,colsB);
    if(!isOrderValid(rowsA,colsA,rowsB,colsB)){
        cout<<"\nInvalid matrix dimensions for addition";
        return 0;
    }
    int  x[rowsA][colsA]; 
    int  y[rowsB][colsB];
    int  z[rowsA][colsA];
    cout<<"\nEnter "<<rowsA<<" * "<<colsA<<" Matrix:\n";
    for(int i=0;i<rowsA;i++){ // for rows
        for(int j=0;j<colsA;j++){  // for columns
            cin>>x[i][j];
        }
    }
    cout<<"\nEnter "<<rowsB<<" * "<<colsB<<" Matrix:\n";
    for(int i=0;i<rowsB;i++){ // for rows
        for(int j=0;j<colsB;j++){  // for columns
            cin>>y[i][j];
        }
    }
    for(int i=0;i<rowsA;i++){ // common row
        for(int j=0;j<colsA;j++){  // common column
            z[i][j]=x[i][j]-y[i][j];
        }
    }
    cout<<"\nMatrix Subtraction:\n";
    for(int i=0;i<rowsA;i++){
        for(int j=0;j<colsA;j++){
            cout<<"\t"<<z[i][j];
        }
        cout<<endl;
    }
    return 0;
}
bool  isOrderValid(int rowsA,int  colsA,int rowsB,int colsB){
    if(rowsA==rowsB && colsA==colsB){
        return true;
    }
    return false;
}
void  getOrder(int &rows,int &cols){
        // for addition and subtraction order must be same.
    cout<<"\nEnter ROW-SIZE:";
    cin>>rows;
    cout<<"Enter COLUMN-SIZE:";
    cin>>cols;
    // cout<<endl<<x[0]<<"\t"<<x[1]<<endl;
}
