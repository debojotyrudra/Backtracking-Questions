#include<bits/stdc++.h>
void subset(int i,int n,vector<int> &arr,vector<int> &res,vector<vector<int>> &ans)
{
    if(i==n)
    {
        ans.push_back(res);
        return;
    }
    else
    {
        res.push_back(arr[i]);
        subset(i+1,n,arr,res,ans);
        res.pop_back();
        while(i+1<arr.size() && arr[i]==arr[i+1])
            i++;
        subset(i+1,n,arr,res,ans);
    }
}
vector<vector<int>> uniqueSubsets(int n, vector<int> &arr)
{
    // Write your code here.
    sort(arr.begin(),arr.end());
    vector<vector<int>> ans;
    vector<int> res;
    subset(0,n,arr,res,ans);
    sort(ans.begin(),ans.end());
    return ans;
}
