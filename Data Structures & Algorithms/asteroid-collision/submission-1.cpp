class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        stack <int> st;
        for (int i = 0; i < asteroids.size(); i++){
            if (st.empty()){
                st.push(asteroids[i]);
            } else {
                // Check for collisions with the previous insertions to the stack
                int currentRock = asteroids[i];
                int alive = true;
                while (alive && !st.empty() && st.top() > 0 && currentRock < 0){
                    int topRock = st.top();
                    st.pop();
                    if (topRock > -currentRock){
                        alive = false;
                        st.push(topRock);
                    }
                    if (topRock == -currentRock){
                        alive = false;
                    }
                }
                if (alive){
                    st.push(currentRock);
                }
            }
        }
        vector <int> out;
        while(!st.empty()){
            out.insert(out.begin(), st.top());
            st.pop();
        }
        return out;
    }
};