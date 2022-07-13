#include "../resources/main.h"

class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int i = 0;
        for(int & ele: nums)
            if(ele!=val) nums[i++] = ele;
        return i;
    }
};
 