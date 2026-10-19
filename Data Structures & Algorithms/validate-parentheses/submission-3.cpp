class Solution {
public:
    bool isValid(string s) {
        stack <char> st;
        for (char ch: s){
            if(ch=='(' || ch=='{'|| ch=='['){
                st.push(ch);
            } else {
                //if we run into a char but the stack is empty
                if (st.empty()){
                    return false;
                }
                char top = st.top();
                // if the ch and top match
                if((ch == ')' && top == '(') || 
                    (ch == '}' && top == '{') || 
                    (ch == ']' && top == '[')){
                        st.pop();
                // if the ch and top dont match        
                } else {
                    return false;
                }
            }
        }
        // check for empty, if has element should return false
        return st.empty();
    }
};
