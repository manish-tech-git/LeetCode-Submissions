public class Solution {
    public int SubarraySum(int[] nums, int k) {

        int n = nums.Length;

        Dictionary<int, int> mp = new Dictionary<int, int>();

        int cnt = 0; 
        int sum = 0;

        for (int i = 0; i < n; i++){
            sum += nums[i];

            if(sum == k) cnt++;

            if(mp.ContainsKey(sum-k)) cnt += mp[sum - k];

            if(!mp.ContainsKey(sum)) mp[sum] = 1;
            else mp[sum]++;
        }

        return cnt;
      
        
    }
}