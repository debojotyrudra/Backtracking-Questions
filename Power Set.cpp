void helper(int i,vector<int> &v,vector<vector<int>> &ans,vector<int> &res)
{
    if(i==v.size())
    {
        ans.push_back(res);
        return;
    }
    res.push_back(v[i]);
    helper(i+1,v,ans,res);
    res.pop_back();
    helper(i+1,v,ans,res);
}
vector<vector<int>> pwset(vector<int>v)
{
    //Write your code here
    vector<vector<int>> ans;
    vector<int> subset;
    helper(0,v,ans,subset);
    return ans;
}
