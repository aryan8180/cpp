#include <bits/stdc++.h> 
vector<int> wavePrint(vector<vector<int>> arr, int nRows, int mCols)
{
    //Write your code here
    vector<int>result;
    for(int i=0;i<mCols;i++){
        if(i&1){
            for(int j=nRows-1;j>=0;j--){
                result.push_back(arr[j][i]);
            }
        }else{
            for(int j=0;j<nRows;j++){
                result.push_back(arr[j][i]);
            }
        }
    }
    return result;
}