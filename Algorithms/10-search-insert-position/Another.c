int searchInsert(int* nums, int numsSize, int target){
    int l=0, r=numsSize;
    int m=(l+r)/2;
    while(l<r){
        if(nums[m]==target) return m;
        else if(target>nums[m]) l=m+1;
        else r=m;
        m=(l+r)/2;
    }
    return m;
}