class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        int currentSum = 0;
        vector<int> output;
        
        for(int i = 0; i < nums.size(); i++){
            currentSum += nums.at(i);
            output.push_back(currentSum);
        }
        return output;
        
    }
};