class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        bool allZeros = true;
        int zeroPresent = 0;
        int totalMultiple = 1;
        for (int i = 0 ; i < nums.size(); i++){
            if (nums[i] == 0){
                zeroPresent++;
                continue;
            } else {
                totalMultiple = totalMultiple * nums[i];
                allZeros = false;
            }
        }
        for (int i = 0; i < nums.size(); i++){
            if (allZeros || zeroPresent > 1){
                nums[i] = 0;
                continue;
            }
            if (zeroPresent == 1){
                if (nums[i] == 0){
                    nums[i] = totalMultiple;
                } else {
                    nums[i] = 0;
                }
            } else {
                nums[i] = totalMultiple/nums[i];
            }
        }
        return nums;
    }
};
