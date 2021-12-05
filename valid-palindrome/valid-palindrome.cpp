class Solution {
public:
    bool isPalindrome(string s) {
        string check = "";
        for(int i = 0; i < s.length(); i++){
            if(isalnum(s[i]))
                check += tolower(s[i]);
        }
        cout << check << endl;
        for(int i = 0; i < check.length(); i++){
            cout << check[i] << " " <<  check[check.length() - 1 - i] << endl;
            if(check[i] != check[check.length() -1 - i])
                return false;
        }
        return true;
    }
};