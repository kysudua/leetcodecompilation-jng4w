#include "../resources/main.h"


class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int rmb = 1;
        for(int i=digits.size()-1;i>=0;i--){

            if(rmb)
                if(digits[i]==9)
                    digits[i] = 0;
                else {
                    digits[i]+=1;
                    rmb=0;
                }
        }
        if(rmb) digits.insert(digits.begin(), 1);
        return digits;
    }
};


 