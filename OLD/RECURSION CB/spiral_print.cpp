#include<iostream>
using namespace std;


int main(){
    int a[100][100];
    int m,n;
    cin>>n>>m;

    int val=1;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            a[i][j] = val;
            val++;
        }
    }
    ///Normal Print
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
    ///Spiral Print
    int startRow=0,endRow=n-1,endCol=m-1,startCol=0;

    while(startRow<=endRow && startCol <=endCol){

        for(int i=startCol;i<=endCol;i++){
            cout<<a[startRow][i]<<" ";
        }
        startRow++;

        for(int i=startRow;i<=endRow;i++){
            cout<<a[i][endCol]<<" ";
        }
        endCol--;

        if(endRow>startRow){
        for(int i=endCol;i>=startCol;i--){
            cout<<a[endRow][i]<<" ";
        }
        endRow--;
        }

        if(startCol<endCol){
        for(int i=endRow;i>=startRow;i--){
            cout<<a[i][startCol]<<" ";
        }
        startCol++;
        }
    }


    return 0;
}
