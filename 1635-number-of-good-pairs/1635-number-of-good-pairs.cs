public class Solution {
    public int NumIdenticalPairs(int[] nums) {

        int gp=  0;
        for (int i = 0;  i < nums.Length; i++){
            for (int j = 0; j < nums.Length; j++){
                if(nums[i] == nums[j] && i < j)
                    gp++;
            }
        }

        return gp;

        
    }
}