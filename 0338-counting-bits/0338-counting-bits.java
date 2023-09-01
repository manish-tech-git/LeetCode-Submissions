class Solution {

    public int bits(int num)
    {
        int count = 0;
        while (num > 0)
        {
            int rem = num % 2;
            if(rem == 1)
            {
                count++;
            }

            num = num / 2;
            

        }

        return count;
    }


    public int[] countBits(int n) {

        int[] arr = new int[n+1];
        for (int i = 0; i <= n; i++){
            int nn = bits(i);
            arr[i] = nn;
        }
        
        return arr;
    }
}