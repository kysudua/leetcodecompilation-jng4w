
void merge(int* nums1, int nums1Size, int m, int* nums2, int nums2Size, int n){
    for(int i=m+n-1,j=m-1,k=n-1; i>=0; i--)
                if(k<0) 
                    nums1[i]=nums1[j--];
                else if(j<0) 
                    nums1[i]=nums2[k--];
                else if(nums1[j]>nums2[k])
                    nums1[i]=nums1[j--];
                else
                    nums1[i]=nums2[k--];
}