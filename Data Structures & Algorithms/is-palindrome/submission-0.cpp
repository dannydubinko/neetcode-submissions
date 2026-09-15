class Solution {
public:
    bool isPalindrome(string s) {
        string new_string;

        for (char c : s){
            if (isalnum(c)){
                new_string.push_back(tolower(c));
            }
        }

        int l = 0, r = new_string.size() - 1;

        while (l <= r){
            if (new_string[l] != new_string[r]){
                return false;
            }
            l++;
            r--;
        }
        return true;
    }
};
