class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        int output = 0;
        for(int i = 0; i < nums.size()-1; i++){
            for(int j = i; j < nums.size(); j++){
                if(i<j && nums[i] == nums[j]){
                    output++;
                }
            }
        }
        
        return output;
    }
};