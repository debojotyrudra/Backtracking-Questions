#include<bits/stdc++.h>
void helper(int i,int b,int s,vector<int>&arr,vector<int>&res,vector<vector<int>>& ans)
{
    if(s>b)
        return;
     if(s==b)
     {
         ans.push_back(res);
         return;
     }
    if(i==arr.size())
        return;
    helper(i+1,b,s,arr,res,ans);
    res.push_back(arr[i]);
    s+=arr[i];
    helper(i,b,s,arr,res,ans);
    res.pop_back();
    s-=arr[i];
}
vector<vector<int>> combSum(vector<int>& arr, int b)
{
	// Write your code here
	// Return a vector of sorted vectors/combinations
    vector<vector<int>> ans;
    vector<int> res;
    sort(arr.begin(),arr.end());
    helper(0,b,0,arr,res,ans);
    return ans;
}
