public class Solution {
    public IList<bool> KidsWithCandies(int[] candies, int num) {
        
        int n = candies.Length;
        int maxi = candies[0];
        for (int i = 0; i < n; i++){

            maxi = Math.Max(maxi, candies[i]);
        }

        var arr = new List<bool>();

        for(int i = 0;i < n; i++){
            if(candies[i] + num >= maxi){
                arr.Add(true);
            }
            else{
                arr.Add(false);
            }
        }

        return arr;
        
    }
}