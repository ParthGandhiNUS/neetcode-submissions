class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int n = nums.size();
        int l = 0;
        int out = n + 1;
        long long currTotal = 0;
        for (int r = 0; r < n; r++){
            currTotal += nums[r];
            while (currTotal >= target){
                out = min(out, r - l + 1);
                currTotal -= nums[l];
                l++;
            }
        }
        return out == n + 1 ? 0 : out;
    }
};