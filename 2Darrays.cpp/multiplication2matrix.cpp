#include<iostream>
#include<vector>
using namespace std;
int main(){
    int r1,r2,c1,c2;
    cout<<"enter the values of row1,row2,column1,column2"<<endl;
    cin>>r1>>r2>>c1>>c2;
    //matrix 1
    cout<<"enter the elements of the matrix 1"<<endl;
    int arr[r1][c1];
    for(int i=0;i<r1;i++){
        for(int j=0;j<c1;j++){
            cin>>arr[i][j];
        }
    }
    cout<<"enter the elements for the 2nd matrix"<<endl;
    int brr[r2][c2];
    for(int i=0;i<r2;i++){
        for(int j=0;j<c2;j++){
            cin>>brr[i][j];
        }
    }
    int ans[r1][c2];
    if(c1!=r2){
        cout<<"Sorry! matrix multiplication is not possible."<<endl;
    }
    else{
       for(int i=0;i<r1;i++){
        for(int j=0;j<c2;j++){
            int value;
            for(int k=0;k<r2;k++){
                value+=arr[i][k]*brr[k][j];
            }
            ans[i][j]=value;
        }
       } 
    }
}