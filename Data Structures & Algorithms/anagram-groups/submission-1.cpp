class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, int> pairs;
        vector<vector<string>> output;

        string temp;
        int counter = 0, index = 0;
        

        for(string str : strs){
            temp = str;
            sort(temp.begin(), temp.end());
            if(!pairs.contains(temp)){
                pairs[temp] = counter;
                output.push_back({str});
                counter++;
                
            } else {
                index = pairs[temp];
                output[index].push_back(str);
            }
        }
        return output;
    }
};
 