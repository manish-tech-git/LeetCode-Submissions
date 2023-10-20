public class Solution {
    public int[] SmallerNumbersThanCurrent(int[] nums) {
        
        int n = nums.Length;
        int [] arr  = new int[n];
        for (int i = 0; i< n; i++){
            int cnt = 0;
            for(int j = 0; j < n; j++){

                if(i != j && nums[j] < nums[i]){
                    cnt++;
                }
            }
            arr[i] = cnt;
        }

        return arr;


    }
}