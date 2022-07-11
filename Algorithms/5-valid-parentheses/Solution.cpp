#include "../resources/main.h"

class Solution {
public:
    bool isValid(string s) {
        vector<char> stack;
        for(char i: s){
            switch(i){
                case '(':
                case'[':
                case '{':
                    stack.push_back(i);
                    break;
                case ')':
                    if(!stack.size() || stack.back()!='(') return false;
                    else stack.pop_back();
                    break;
                case ']':
                    if(!stack.size() || stack.back()!='[') return false;
                    else stack.pop_back();
                    break;
                case '}':
                    if(!stack.size() || stack.back()!='{') return false;
                    else stack.pop_back();
                    break;
                default:
                    
                    return false;
            }
        }
        return !stack.size();
    }
};