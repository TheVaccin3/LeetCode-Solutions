class Solution {
public:
    bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) {
        string x = "";
        for(string s : word1){
            x +=s;
        }
        string y = "";
        for(string s : word2){
            y +=s;
        }
        if(x == y)
            return true;
        return false;
    }
};