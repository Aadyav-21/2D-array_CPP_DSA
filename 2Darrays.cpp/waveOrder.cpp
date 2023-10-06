#include<iostream>
#include<vector>
using namespace std;
vcetor<int> wavePrint(vector<vector<int>>arr, int r, int c){   
    vector<int>ans;
    for(int col=0;col<c;c++){
        if(col&1){
            for(int row=r-1;row>=0;row--){
                //cout<<arr[row][col]<<" ";
                ans.push_back(arr[row][col]);
            }
        }
        else{
            for(int row=0;row<r;row++){
                //cout<<arr[row][col]<<" ";
                ans.push_back(arr[row][col]);
            }
        }
    }
    return ans;
}
int main(){

}