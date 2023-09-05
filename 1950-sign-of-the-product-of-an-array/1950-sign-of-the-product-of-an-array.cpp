class Solution {
public:
    int arraySign(vector<int>& nums) {
        int cnt_n = 0;

        for (int i = 0; i < nums.size(); i++){
            if(nums[i] < 0) cnt_n++;
            else if(nums[i] == 0) return 0;

        }

        if(cnt_n % 2 == 0) return 1;
        else return -1;
        
    }
};