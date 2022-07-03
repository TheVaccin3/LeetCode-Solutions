class Solution {
public:
    int strStr(string haystack, string needle) {
        if(haystack.size() == 0) return 0;
        auto ret =  haystack.find(needle);
        if (ret == string::npos) return -1;
        return ret;
        
    }
};