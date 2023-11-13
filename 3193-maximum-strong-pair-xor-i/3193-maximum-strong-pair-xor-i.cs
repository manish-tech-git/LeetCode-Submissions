public class Solution {
    public int MaximumStrongPairXor(int[] nums) {
        
        int rs = int.MinValue;

        for (int i = 0; i < nums.Length; i++)
       {
           for (int j = i; j < nums.Length; j++)
            {
                if (Math.Abs(nums[i] - nums[j]) <= Math.Min(nums[i], nums[j]))
                {
                    rs = Math.Max(rs, nums[i] ^ nums[j]);
                }
            }
        }
       

        return rs;

        
    }
}