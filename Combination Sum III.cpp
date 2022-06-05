void helper(int i,int k,int n,int sum,vector<int> &res,vector<vector<int>> &ans)
{
    if(sum>n)
        return;
    if(k==0)
    {
        if(sum==n)
            ans.push_back(res);
        return;
    }
    if(i>9)
        return;
    sum+=i;
    res.push_back(i);
    helper(i+1,k-1,n,sum,res,ans);
    sum-=i;
    res.pop_back();
    helper(i+1,k,n,sum,res,ans);
}
vector<vector<int>> combinationSum3(int k, int n) {
    // Write your code here.
    vector<vector<int>> ans;
    vector<int> res;
    helper(1,k,n,0,res,ans);
    return ans;
}
