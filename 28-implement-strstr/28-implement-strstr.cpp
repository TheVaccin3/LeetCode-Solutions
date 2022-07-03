class Solution {
public:
    int strStr(string haystack, string needle) {
        if(haystack.size() == 0) return 0;
        auto ret =  haystack.find(needle);
        return ret == string::npos ? -1 : ret;
        
        
    }
};