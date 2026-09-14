#include <stack>
#include <string>
#include <unordered_set>

class Solution {
public:
    bool isValid(string s) {
        unordered_set<string> ans = {"[]", "()", "{}"};
        stack<char> st;
        string current;

        for (int i=0; i<s.size(); i++){
            if (!st.empty()) {
                current = {st.top(), s[i]};
                if (ans.count(current)){
                    st.pop();
                    continue;
                }
            }
            st.push(s[i]);

        }
        return st.empty();
        
    }
};
