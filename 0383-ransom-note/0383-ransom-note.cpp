class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {

        unordered_map<char, int> charCount;

        for (int i = 0; i < magazine.size(); i++)
            charCount[magazine[i]]++;

        for (int i = 0; i < ransomNote.size(); i++)
            if(--charCount[ransomNote[i]] < 0) return false;

        return true;
        
    }
};