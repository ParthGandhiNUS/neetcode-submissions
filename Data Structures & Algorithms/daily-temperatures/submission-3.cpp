class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        int n = temperatures.size();
        vector <int> out(n);
        // In our stack we store both [temp, index]
        stack <pair<int, int>> st;
        for (int i = 0; i < n; i++){
            while((!st.empty()) && (temperatures[i] > st.top().first)){
                int stackTemp = st.top().first;
                int stackIndex = st.top().second;
                st.pop();
                out[stackIndex] = i - stackIndex;
            }
            st.push({temperatures[i], i});
        }
        out[n-1] = 0;
        return out;
    }
};
