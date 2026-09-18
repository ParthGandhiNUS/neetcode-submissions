class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        int n = nums.size();
        if (n == 0){
            return {};
        }
        vector<int> out;
        for (int i = 0; i < 2; i++){
            for (int j = 0; j < nums.size(); j++){
                out.push_back(nums[j]);
            }
        }
        return out;
    }
};