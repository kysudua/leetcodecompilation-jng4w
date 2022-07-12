#include "../resources/main.h"


 class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        
        int prev = INT_MAX;
        int remain = 0;
        vector<int> res;
        for(auto & ele: nums){
            if(ele!=prev){
                res.push_back(ele);
                prev=ele;
                remain++;
            }
        }
        nums = res;
        return remain;
    }
        
};