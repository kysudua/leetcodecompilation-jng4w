#include "../resources/main.h"
//UNDONE
class Solution {
public:
    int mySqrt(int x) {
        unsigned int h = x;
        unsigned int l = -1;
        unsigned int mid = 0;
        while(l<h){
            mid = (h+l)/2;
            cout<<mid<<"\n";
            unsigned int pow = mid*mid;
            unsigned int pow1 = (mid-1)*(mid-1);
            unsigned int pow2 = (mid+1)*(mid+1);

            if(pow==x) return mid;
            else if(pow<x) {
                if(pow2>x) return mid;
                else l = mid+1;
            }
            else {
                if(pow1<x) return (int) pow1;
                else h = mid-1;
            } 
        }
        return mid+1;
    }
};