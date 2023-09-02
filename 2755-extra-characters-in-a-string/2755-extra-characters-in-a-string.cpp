class Solution {
private:
int solve(int i,int n,string  & s, vector<string>& dict,vector<int> & dp)
{
    if(i>=n)
    return 0;
    if(dp[i]!=-1)
    return dp[i];
    int ans=INT_MAX;
string s1="";
 for(int curr=i;curr<n;curr++)
 {
s1.push_back(s[curr]);
int a1=INT_MAX;
if(find(dict.begin(),dict.end(),s1)!=dict.end())
a1=0+solve(curr+1,n,s,dict,dp);
else
a1=s1.length()+solve(curr+1,n,s,dict,dp);

ans=min(ans,a1);

 }
 return dp[i]= ans;
    
}
public:
    int minExtraChar(string s, vector<string>& dictionary) {
        int n=s.length();
        vector<int> dp(n+1,-1);
       return solve(0,n,s,dictionary,dp);
        
    }
};