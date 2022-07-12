#include "../resources/main.h"

class Best {
public:
    int removeDuplicates(vector<int>& nums) {
        int i = 0;
        for(int & ele: nums)
            if(!i || ele!=nums[i-1])
                nums[i++]=ele;
        return i;
    }
};