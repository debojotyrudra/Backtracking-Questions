void subset(int i,int n,int k,vector<int>&res,vector<vector<int>>&ans)
{
    if(k==0)
    {
        ans.push_back(res);
        return;
    }
    if(k>n-i+1) 
        return;
    if(i>n)
    {
        return;
    }
    res.push_back(i);
    subset(i+1,n,k-1,res,ans);
    res.pop_back();
    subset(i+1,n,k,res,ans);
}
vector<vector<int>> combinations(int n, int k)
{
    // Write your code here.
    vector<int> res;
    vector<vector<int>> ans;
    subset(1,n,k,res,ans);
    return ans;
}
