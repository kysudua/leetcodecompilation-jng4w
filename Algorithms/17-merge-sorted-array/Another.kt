class Solution {
    fun merge(nums1: IntArray, m: Int, nums2: IntArray, n: Int): Unit {
        var j: Int =m-1;
        var k: Int =n-1;
        for(i in m+n-1 downTo 0)
            if(k<0){
                nums1[i]=nums1[j];
                j=j-1;
            }
                
            else if(j<0){
                nums1[i]=nums2[k];
                k=k-1;
            }
                
            else if(nums1[j]>nums2[k]){
                nums1[i]=nums1[j];
                j=j-1;
            }
                
            else{
                nums1[i]=nums2[k];
                k=k-1;
            }
                
    }
}