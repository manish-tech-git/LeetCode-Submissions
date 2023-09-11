class Solution {
public:
    bool isReachableAtTime(int sx, int sy, int fx, int fy, int t) {
        
        if(sx == fx && sy == fy) return t!= 1;
        int maxDistance = max(abs(fx-sx), abs(sy-fy));
        if(maxDistance <= t) return true;
        return false;
    }
};