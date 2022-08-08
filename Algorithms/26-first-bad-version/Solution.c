// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

int firstBadVersion(int n) {
    long int l=1, r=n;
    long int m=(l+r)/2;;
    while(l<r){
        if(isBadVersion(m)) r=m;
        else l=m+1;
        m=(l+r)/2;
    }
    return m;
}