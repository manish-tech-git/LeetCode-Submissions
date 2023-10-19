public class Solution {
    public int[] GetConcatenation(int[] nums) {

        int n = nums.Length;
        int []arr = new int[2*n];

        for (int i = 0; i < n; i++){
            arr[i] = nums[i];
        }

        
        for (int i = 0; i < n; i++){
            arr[n+i] = nums[i];
        }

        return arr;

        
    }
}