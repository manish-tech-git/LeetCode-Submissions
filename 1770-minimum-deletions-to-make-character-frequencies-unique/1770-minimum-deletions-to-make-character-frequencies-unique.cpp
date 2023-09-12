class Solution {
public:
    int minDeletions(string s) 
    {

        unordered_map<char, int> mp;
        int del = 0;
        unordered_set<int> used_fr;

        for (char &ch: s){
            mp[ch]++;
        }

        for(auto &f: mp){
            int fr = f.second;
            while(fr > 0 && used_fr.find(fr) != used_fr.end() )
            {
                fr--;
                del++;

            }

            used_fr.insert(fr);
        }
        
        return del;
    }
};