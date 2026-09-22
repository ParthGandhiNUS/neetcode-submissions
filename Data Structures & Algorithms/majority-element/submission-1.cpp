class Solution {
public:
    int majorityElement(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int currNum = nums[0], currCount = 1, currHigh = 0,  highNum = nums[0];
        if (nums.size() == 1) return currNum;
        for (int i = 1; i < nums.size(); i++){
            if (nums[i] == currNum){
                currCount++;
            } else {
                currNum = nums[i];
                currCount = 1;
            }
            if (currCount > currHigh){
                currHigh = currCount;
                highNum = currNum;
            }
        }
        return highNum;
    }
};