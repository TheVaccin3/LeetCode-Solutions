class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int digits = 0;
        int even = 0;
        for(int x : nums){
            digits = 0;
            while(x){
                x /=10;
                digits++;
            }
            if(digits % 2 == 0){
                even++;
            }
        }
        return even;
    }
};