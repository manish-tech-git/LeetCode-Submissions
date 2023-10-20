public class Solution {
    public int[] Shuffle(int[] nums, int n) {

        int m = nums.Length;
        int []arr = new int[m];

        int i = 0;
        int j = n;
        int k  = 0;

        while (j < m)
        {
            
            arr[k++] =  nums[i++];
            arr[k++] = nums[j++];


        }

        // for(int p = 0; p < m; p++){
        //     Console.WriteLine(arr[p]);
        // }

    return arr;
        
        
    }
}