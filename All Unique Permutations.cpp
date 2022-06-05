#include<bits/stdc++.h>
void perm(vector<int> &arr,vector<vector<int>> &ans,vector<int> &res,vector<int> &f)
{
    if(arr.size()==res.size())
    {
        auto it=find(ans.begin(),ans.end(),res);
        if(it==ans.end())
        {
            ans.push_back(res);
            return;
        }
        else
            return;
    }
    for(int i=0;i<arr.size();i++)
    {
        if(!f[i])
        {
            res.push_back(arr[i]);
            f[i]=1;
            perm(arr,ans,res,f);
            res.pop_back();
            f[i]=0;
        }
    }
}
vector<vector<int> > uniquePermutations(vector<int> &arr, int n) {
	// Write your code here.
    vector<vector<int>> ans;
    vector<int> res;
    vector<int> f(n,0);
    perm(arr,ans,res,f);
    return ans;
}
