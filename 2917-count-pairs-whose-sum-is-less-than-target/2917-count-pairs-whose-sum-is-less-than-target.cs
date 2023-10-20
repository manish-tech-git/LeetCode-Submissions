public class Solution {
    public int CountPairs(IList<int> nums, int target) {

        int n = nums.Count;
        int cnt = 0;
        for (int i = 0; i < n; i++){
            for(int j =0; j < n; j++){
                if(i < j && nums[i] + nums[j] < target){
                    cnt++;
                } 
            }
        }

        return cnt;
        
    }
}