class Solution {
   public:
    int maxArea(vector<int>& heights) {
        int max_area = 0, min_height = 0;
        int r = heights.size() - 1, l = 0;

        while (l < r) {
            min_height = min(heights[l], heights[r]);
            max_area = max(min_height * (r - l), max_area);

            if (heights[l] < heights[r]) {
                l++;
            } else {
                r--;
            }
        }
        return max_area;
    }
};
