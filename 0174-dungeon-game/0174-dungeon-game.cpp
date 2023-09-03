class Solution {
private: 
    int rec (int i, int j, vector <vector<int>> &dungeon,vector <vector<int>> &dp)
    {
        if(i >= dungeon.size() || j >= dungeon[0].size()) 
            return INT_MAX;

        if(dp[i][j] != -1) return dp[i][j];
        
        int health = min(rec(i+1, j, dungeon, dp), rec(i, j+1, dungeon, dp));

        if(health == INT_MAX) health = 1;

        //int res = 0;

        if(health - dungeon[i][j] > 0)
            dp[i][j] = health - dungeon[i][j];
        else 
            dp[i][j] =  1;

        
        return dp[i][j];
    }
    
public:
    int calculateMinimumHP(vector<vector<int>>& dungeon) {

        if(dungeon.size() == 0 || dungeon[0].size() == 0)    
            return 0;

        int n = dungeon.size();
        int m = dungeon[0].size();

        vector <vector<int>> dp(n, vector<int> (m, -1));

        return rec (0, 0, dungeon, dp);
        
    }
};