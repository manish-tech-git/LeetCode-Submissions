public class Solution {
    public int MostWordsFound(string[] sentences) {

        List<int> l = new List<int> ();
        for(int i = 0; i < sentences.Length; i++){
            int cnt = 0;
            var a = sentences[i].Split(" ");
            cnt = a.Length;
            l.Add(cnt);
        }

        var st = l.Max(x => x);
        return st;
        
    }
}