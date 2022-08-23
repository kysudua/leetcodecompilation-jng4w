#include "../resources/main.h"


class Solution {
public:
    string addBinary(string a, string b) {
        int i = a.length()-1;
        int j = b.length()-1;
        int carry = 0;
        string res = "";
        while(i>=0 || j>=0 || carry > 0){
            if(i>=0){
                carry+=a[i--]-'0';
            }
            if(j>=0){
                carry+=b[j--]-'0';
            }
            res = to_string(carry%2) + res;
            carry = carry/2;
        }
        return res;
    }
};


 