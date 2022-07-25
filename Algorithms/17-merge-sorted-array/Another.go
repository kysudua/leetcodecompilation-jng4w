func merge(nums1 []int, m int, nums2 []int, n int)  {
    var j int = m-1
    var k int = n-1
    for i := m+n-1; i>=0; i-- {
        if k<0 {
            nums1[i]=nums1[j]
            j=j-1
        } else if j<0 {
            nums1[i]=nums2[k]
            k=k-1
        } else if nums1[j]>nums2[k] {
            nums1[i]=nums1[j]
            j=j-1
        } else{
            nums1[i]=nums2[k]
            k=k-1
        }
    }
            
}