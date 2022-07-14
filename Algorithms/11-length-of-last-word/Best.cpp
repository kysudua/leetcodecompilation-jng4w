#include "../resources/main.h"

class Best{
public:
    int lengthOfLastWord(string s) {
        //end point searching
        int i = s.length()-1;
        int len = 0;
        while(i>=0&&s[i]==' ') i--;
        while(i>=0&&s[i--]!=' ') len++;
        return len;
    }
};