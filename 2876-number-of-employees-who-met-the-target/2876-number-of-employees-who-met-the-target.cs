public class Solution {
    public int NumberOfEmployeesWhoMetTarget(int[] hours, int target) {
        
        int  n = hours.Length;
        int cnt = 0;

        for (int i = 0; i < n; i++)
        {
            if(hours[i] >= target){

                cnt++;
            }
        }

        return cnt;

    }
}