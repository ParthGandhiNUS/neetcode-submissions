class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if (nums.size() <= 1){return nums.size();}
        sort(nums.begin(), nums.end());
        int longestCount = 1;
        int currCount = 1;
        for (int i = 1; i < nums.size();i++){
            if (nums[i] == nums[i-1]+1){
                currCount++;
            } else if (nums[i] == nums[i-1]) {
                continue;
            } else {
                currCount = 1;
            }
            if (longestCount < currCount){
                longestCount = currCount;
            }
        }
        return longestCount;
    }
};
