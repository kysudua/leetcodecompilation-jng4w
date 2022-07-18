#include "../resources/main.h"


class Solution {
public:
    int mySqrt(int x) {
        for(unsigned int i=0;;i++)
            if(i*i>x) return (int) (i-1);
    }
};


 