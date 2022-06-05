#include<bits/stdc++.h>
void perm(int pos,string &s,vector<string> &ans)
{
    if(pos>=s.size())
    {
        ans.push_back(s);
        return;
    }
    for(int i=pos;i<s.size();i++)
    {
        swap(s[i],s[pos]);
        perm(pos+1,s,ans);
        swap(s[i],s[pos]);
    }
}
vector<string> generatePermutations(string &str)
{
    // write your code here
    vector<string> ans;
    perm(0,str,ans);
    sort(ans.begin(),ans.end());
    return ans;
}
