#include<bits/stdc++.h>
void helper(int idx,int target,int s,int n,vector<int> &arr,vector<int>& res,vector<vector<int>> &ans)
{
    if(s==target)
    {
        ans.push_back(res);
        return;
    }
    if(idx==n || s>target)
        return;
    res.push_back(arr[idx]);
    s+=arr[idx];
    helper(idx+1,target,s,n,arr,res,ans);
    res.pop_back();
    s-=arr[idx];
    while(idx+1<n && arr[idx]==arr[idx+1]) idx++;
    helper(idx+1,target,s,n,arr,res,ans);
}
vector<vector<int>> combinationSum2(vector<int> &arr, int n, int target)
{
	// Write your code here.
    vector<int> res;
    vector<vector<int>> ans;
    sort(arr.begin(),arr.end());
    helper(0,target,0,n,arr,res,ans);
    return ans;
}
