class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int max_length = 0;
        unordered_set<char> ch;
        int l = 0;
        for (int r = 0; r<s.size(); r++){
            while (ch.contains(s[r])){
                ch.erase(s[l]);
                l++;
            }
            max_length = max(max_length, r-l+1);
            ch.insert(s[r]);
        }
        return max_length;
    }
};
