#include<iostream>
using namespace std;
int  main(){

    int   sparseMatrix[4][5]{
        { 1, 0, 4, 8, 0},
        { 0, 0, 0, 0, 6},
        { 0, 5, 9, 0, 0},
        { 0, 0, 4, 0, 0}
    };
    int  size=0;
    for(int i=0;i<4;i++){
        for(int j=0;j<5;j++){
            if(sparseMatrix[i][j] != 0){
                size++;
            }
        }
    }
    int  compactMatrix[3][size]; 
    // 3-ROWS (ROW,COLUMN,VALUE)
    int  k=0;
    for(int i=0;i<4;i++){
        for(int j=0;j<5;j++){
            if(sparseMatrix[i][j] != 0){
                compactMatrix[0][k]=i; // row-index
                compactMatrix[1][k]=j; // column-index
                compactMatrix[2][k]=sparseMatrix[i][j]; // value
                k++;
            }
        }
    }
    cout<<"\nRepresentation:\n";
    for(int i=0;i<3;i++){
        for(int j=0;j<size;j++){
            cout<<compactMatrix[i][j]<<" ";
        }
        cout<<"\n";
    }
    return 0;
}