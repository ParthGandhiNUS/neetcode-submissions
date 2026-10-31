class Solution {
public:
    vector<int> quad;
    vector<vector<int>> res;
    void KSum(int k, int start, long long target, vector<int>& nums, 
    int numSize){
        if (k != 2){
            for (int i = start; i <= numSize - k; i++){
                if (i > start && nums[i] == nums[i-1]){
                    continue;
                }
                quad.push_back(nums[i]);
                KSum(k - 1, i + 1, target - nums[i], nums, numSize);
                quad.pop_back();
            }
        } else { //Base Case w 2 Sum implementation
            int l = start, r = numSize - 1;
            while (l < r){
                long long sum = (long long)nums[l] + nums[r];
                if (sum < target){
                    l += 1;
                } else if (sum > target){
                    r -= 1;
                } else {
                    quad.push_back(nums[l]);
                    quad.push_back(nums[r]);
                    res.push_back(quad);
                    quad.pop_back();
                    quad.pop_back();
                    l += 1;
                    while ((l < r) && nums[l] == nums[l - 1]){
                        l += 1;
                    }
                }
            }
        }
    }
    
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        sort(nums.begin(), nums.end());
        KSum(4, 0, target, nums, nums.size());
        return res;
    }

};