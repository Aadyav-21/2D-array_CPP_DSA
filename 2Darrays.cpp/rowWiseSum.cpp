#include<iostream>
#include<vectors>
using namespace std;
//function to print the row wise sum
void printSum(int arr[][4] ,int row,int col){
    for(int row=0;row<3;row++){
        int sum=0;
        for(int col=0;col<4;col++){
            sum+=arr[row][col];
        }
        cout<<sum<<" ";
    }
}
//largest row sum
int largestRowSum(int arr[][3],int row, int col){
    int maxi = 0;
    int r=-1;
    for(int row=0;row<3;row++){
        int sum=0;
        for(int col=0;col<4;col++){
            sum+=arr[row][col];
        }
        if(sum>maxi){
            maxi=sum;
            r=row;
        }
    }
    cout<<"the max sum is"<<maxi<<endl;
    return r;
}    
int main(){

}