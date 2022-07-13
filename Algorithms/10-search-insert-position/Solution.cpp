#include "../resources/main.h"


class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        if(nums[0]==target) return 0;
        int l = 0;
        int h = nums.size()-1;
        int mid = -1;
        while(l<h){
            mid = (h+l)/2;
            if(target==nums[mid]) return mid;
            else if(target>nums[mid]) l = mid+1;
            else h = mid-1; 
        }
        mid = (h+l)/2;
        return target>nums[mid]?mid+1:mid;
    }
};


 