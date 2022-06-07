class Solution {
public:
    int hammingWeight(uint32_t n) {
        uint8_t numOnes = 0;
        for(uint8_t i = 0; i < 32; i++){
            numOnes += n & 1;
            n >>= 1;
            
        }
        return numOnes;
    }
};