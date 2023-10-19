public class Solution {
    public int FinalValueAfterOperations(string[] operations) {

        int num = 0;
        for(int i = 0; i < operations.Length; i++){
            if(operations[i] == "--X" || operations[i] == "X--"){
                num = num - 1;

            }
            else 
                num = num + 1;
        }       

        return num;
    }
}