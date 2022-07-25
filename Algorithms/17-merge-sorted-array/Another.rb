# @param {Integer[]} nums1
# @param {Integer} m
# @param {Integer[]} nums2
# @param {Integer} n
# @return {Void} Do not return anything, modify nums1 in-place instead.
def merge(nums1, m, nums2, n)
    j = m-1
    k = n-1    
    for i in (m+n-1).downto(0)
        if k<0
            nums1[i]=nums1[j]
            j-=1
        elsif j<0
            nums1[i]=nums2[k]
            k-=1
        elsif nums1[j]>nums2[k] 
            nums1[i]=nums1[j]
            j-=1
        else
            nums1[i]=nums2[k]
            k-=1
        end    
    end
end