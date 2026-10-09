class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n = nums.size();
        if (n == 1){return 1;}
        int i = 1, j = 1, count = 1;
        bool isSame = false;
        while(i < n){
            if (nums[i] != nums[i-1]){
                if (isSame){
                    nums[j++] = nums[i++];
                    isSame = false;
                } else {
                    nums[j++] = nums[i++];
                }
                count++;
            } else {
                isSame = true;
                i++;
            }
        }
        return count;
    }
};