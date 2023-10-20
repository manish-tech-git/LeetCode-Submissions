public class Solution {
    public int MaximumWealth(int[][] accounts) {
        int maxi = Int32.MinValue;
        int n = accounts.Length;
        for (int i =0; i < n; i++){
            int sum = 0;
            for (int j = 0; j < accounts[i].Length; j++){
                sum = sum + accounts[i][j];
            }

            maxi = Math.Max (maxi, sum);
        }

        return maxi;
    }
}