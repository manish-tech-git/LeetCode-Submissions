class Solution {
private:
//     int solve(int m, int n, vector<vector<int> > &dp) {
//   for(int i=0; i<m ;i++){
//       for(int j=0; j<n; j++){
          
//           //base condition
//           if(i==0 && j==0){
//               dp[i][j]=1;
//               continue;
//           }
          
//           int up=0;
//           int left = 0;
          
//           if(i>0) 
//             up = dp[i-1][j];
//           if(j>0)
//             left = dp[i][j-1];
            
//           dp[i][j] = up+left;
//       }
//   }
  
//   return dp[m-1][n-1];

  
// }


int f(int i, int j, vector<vector<int>> &dp)
{
    //base case 
    if(i == 0 && j == 0) 
    return 1;

    //invalid path
    if(i < 0 || j < 0) return 0;

    //checking
    if(dp[i][j] != -1) return dp[i][j];

    //recursive call
    int left = f(i-1, j, dp);
    int up = f(i, j-1, dp);

    return dp[i][j] = (left+up);
}
public:
    int uniquePaths(int m, int n) {
       vector <vector <int>> dp (m, vector <int> (n, -1));
       return f(m-1, n-1, dp);
        
    }
};