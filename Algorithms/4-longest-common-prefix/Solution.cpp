#include "../resources/main.h"

class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        
        string sample = strs[0];
        if(!strs[0].size()) return sample;
        for(int i=1; i < strs.size(); i++){
            string ele = strs[i];
            int j = 0;
            for(; j < sample.size() && j < ele.size() && sample[j]==ele[j]; j++);
            sample = sample.substr(0, j);
        }
        return sample;
    }

};