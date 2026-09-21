class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int n = nums.size();
        int count = 0;
        for (int i = 0; i < n; i++){
            if (nums[i] == val){
                count++;
                nums.erase(nums.begin() + i);
                n--;
                i--;
            }
        }
        return nums.size();
    }
};