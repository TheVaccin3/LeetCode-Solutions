class Solution {
public:
    int findCenter(vector<vector<int>>& edges) {
        int x;
        int y;
        int z;
        x = edges[0][0];
        y = edges[1][0];
        z = edges[1][1];
        if(x==y){
            return x;
        } else if (x==z){
            return x;
        }
        return edges[0][1];
    }
};