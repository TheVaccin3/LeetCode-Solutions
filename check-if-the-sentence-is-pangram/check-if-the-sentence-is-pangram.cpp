class Solution {
public:
    bool checkIfPangram(string sentence) {
        bool check[26] = {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
        for(char c : sentence){
            check[c-97] = true;
        }
        for(bool b : check){
            if(!b) return false;
        }
        return true;
    }
};