class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int l = 0;
        int r = 0;
        int sum = 0;
        int min_length = INT_MAX;

        for (int i = 0; i<nums.size(); i++){
            r=i;
            sum += nums[r];
            while (sum >= target){
                min_length = min(min_length, r-l + 1);
                sum -= nums[l];
                l++;
            }
            
        }
        return min_length == INT_MAX? 0 : min_length;
    
    }
};