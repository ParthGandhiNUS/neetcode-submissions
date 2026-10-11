class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> out;
        int n = nums.size();
        sort(nums.begin(), nums.end());
        // i target - <0
        // j - left ptr, k - right ptr
        int i = 0;
        while (nums[i] <= 0 && i < n - 2){
            if (i == 0 || nums[i] != nums[i-1]){
                int target = - nums[i];
                int j = i + 1;
                int k = n - 1;
                
                while (j < k){
                    if (nums[j] + nums[k] < target){
                        j++;
                    } else if (nums[j] + nums[k] > target){
                        k--;
                    } else {
                        out.push_back({nums[i], nums[j], nums[k]});
                        j++;
                        k--;

                        while (j < k && nums[j] == nums[j-1]){
                            j++;
                        }
                        while (j < k && nums[k] == nums[k+1]){
                            k--;
                        }
                    }
                } 
            }
            i++;
        }
        return out;
    }
};
