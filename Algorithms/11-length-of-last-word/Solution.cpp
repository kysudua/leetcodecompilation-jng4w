#include "../resources/main.h"


class Solution {
public:
    int lengthOfLastWord(string s) {
        int begin_pos = 0;
        int end_pos = 0;
        int i=0;
        int mode = 0;
        while(true){
            switch(mode){
                case 0:
                    if(i==s.length())
                        return end_pos - begin_pos;
                    else if(s[i]!=' '){
                        begin_pos = i;
                        end_pos = i;
                        mode = 1;
                    }
                    else i++;
                    break;
                case 1:
                    if(i==s.length()){
                        end_pos = i;
                        return end_pos - begin_pos;
                    }
                    else if(s[i]==' '){
                        end_pos = i;
                        mode = 0;
                    }
                    else i++;
                    break;
            }

        }
    }
};


 