#include "../resources/main.h"

class Solution {
    int charToInt(char i){
        switch(i){
            case 'I':
                return 1;
            case 'V':
                return 5;
            case 'X':
                return 10;
            case 'L':
                return 50;
            case 'C':
                return 100;
            case 'D':
                return 500;
            case 'M':
                return 1000;
            default:
                return 0;
        }
    }
public:
    int romanToInt(string s) {
        
        int value = 0;
        for(int i = 0; i < s.size(); i++){
            int tmp = charToInt(s[i]);
            if(i < s.size()-1){
               if(tmp < charToInt(s[i+1])) {                    
                    value += (charToInt(s[i+1]) - tmp); 
                    i++;
                }
                else value += tmp; 
            }
            else value += tmp; 
            
            
            
        }
        return value;
    }
};