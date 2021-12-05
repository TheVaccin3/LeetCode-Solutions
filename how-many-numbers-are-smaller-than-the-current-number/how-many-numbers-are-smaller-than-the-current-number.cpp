class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        vector<int> output;
        int counter = 0;
        for(int x : nums){
            for(int y : nums){
                if(y < x)
                    counter++;
            }
            output.push_back(counter);
            counter = 0;
        }
        
        return output;
    }
};