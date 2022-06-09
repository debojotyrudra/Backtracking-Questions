#include<bits/stdc++.h>
void find(int i,string &s,string &temp, vector<string>&ans,unordered_map<char,string>&mp){
    if(i==s.size()){
        ans.push_back(temp);
        return;
    }
    string str=mp[s[i]];
    for(int j=0;j<str.size();j++){
        temp.push_back(str[j]);
        find(i+1,s,temp,ans,mp);
        temp.pop_back();
    }
}
vector<string> combinations(string s){
    
    // Write your code here
    unordered_map<char,string>mp;
    mp['2']="abc";
    mp['3']="def";
    mp['4']="ghi";
    mp['5']="jkl";
    mp['6']= "mno"; 
    mp['7']="pqrs";
    mp['8']="tuv";
    mp['9']="wxyz";
    vector<string>ans;
    string temp;
    find(0,s,temp,ans,mp);
    return ans;
}
