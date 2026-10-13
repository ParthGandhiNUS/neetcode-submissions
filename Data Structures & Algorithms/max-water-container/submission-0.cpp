class Solution {
public:
    int maxArea(vector<int>& heights) {
        int i = 0, j = heights.size() - 1;
        int maxArea = (j - i) * min(heights[i], heights[j]);
        while (i < j){
            if (heights[i] < heights[j]){
                i++;
            } else {
                j--;
            }
            maxArea = max(maxArea, (j - i) * min(heights[i], heights[j]));
        }
        return maxArea;
    }
};
