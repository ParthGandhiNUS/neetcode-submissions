class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int l = 0;
        int out = INT_MAX;
        int currTotal = 0;
        for (int r = 0; r < nums.size(); r++){
            currTotal += nums[r];
            while (currTotal >= target){
                out = min(out, r - l + 1);
                currTotal -= nums[l];
                l++;
            }
        }
        return out == INT_MAX ? 0 : out;
    }
};