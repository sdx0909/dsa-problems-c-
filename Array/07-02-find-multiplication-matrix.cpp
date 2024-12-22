#include<iostream>
using namespace std;
void getOrder(int&,int&);
bool isOrderValid(int,int,int,int);
int main(){
    int rowsA,colsA,rowsB,colsB;
    cout<<"Enter Matrix Order for A:";
    getOrder(rowsA,colsA);
    cout<<"Enter Matrix Order for B:";
    getOrder(rowsB,colsB);

    if(!isOrderValid(rowsA,colsA,rowsB,colsB)){
        cout<<"\nInvalid Matrix-Order to perform Multiplication..!";
        return 0;
    }
    int a[rowsA][colsA],b[rowsB][colsB],c[rowsA][colsB];
    cout<<"\nEnter "<<rowsA<<" * "<<colsA<<" Matrix:\n";
    for(int i=0;i<rowsA;i++){
        for(int j=0;j<colsA;j++){
            cin>>a[i][j];
        }
    }
    cout<<"\nEnter "<<rowsB<<" * "<<colsB<<" Matrix:\n";
    for(int i=0;i<rowsB;i++){
        for(int j=0;j<colsB;j++){
            cin>>b[i][j];
        }
    }
    cout<<"\nMatrix Multiplication:\n";
    for(int i=0;i<rowsA;i++){
        for(int j=0;j<colsB;j++){
            c[i][j]=0;
            for(int k=0;k<colsA;k++){
                c[i][j]=c[i][j]+a[i][k]*b[k][j];
            }
            cout<<"\t"<<c[i][j];
        }
        cout<<endl;
    }
    return 0;
}
void getOrder(int  &rows,int  &cols){

    cout<<"\nEnter ROW-SIZE:";
    cin>>rows;
    cout<<"Enter COLUMN-SIZE:";
    cin>>cols;
}
bool isOrderValid(int rowsA,int colsA,int rowsB,int colsB){
    // 1st Matrix cols ==  2nd Matrix rows
    // Resultant Matrix order :  1st Matrix rows * 2nd Matrix cols
    return (colsA==rowsB);
}