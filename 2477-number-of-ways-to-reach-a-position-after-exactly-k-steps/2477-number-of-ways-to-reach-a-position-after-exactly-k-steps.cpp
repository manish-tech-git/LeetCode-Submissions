class Solution {
    int mod = 1e9+7;
public:

    int f(int curr, int last, int k, vector<vector<int>> &dp)
    {
        if (k == 0) return curr == last;

        if(dp[k][curr+1000] != -1) return dp[k][curr+1000];

        return dp[k][curr+1000] = (f (curr + 1,last, k - 1 , dp) % mod + f(curr - 1, last, k - 1, dp) % mod) % mod;

    }

    int numberOfWays(int startPos, int endPos, int k) {

        if(startPos > endPos) {
            swap(startPos, endPos);
        }
        int diff = endPos - startPos;
        vector <vector<int>> dp(k+1, vector<int>(4000, -1));
        if(diff % 2 != k%2) return 0;
        return f(startPos, endPos, k, dp);
        
    }
};